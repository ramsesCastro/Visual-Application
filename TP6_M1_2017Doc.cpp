
// TP6_M1_2017Doc.cpp : implémentation de la classe CTP6_M1_2017Doc
//

#include "stdafx.h"
// SHARED_HANDLERS peuvent être définis dans les gestionnaires d'aperçu, de miniature
// et de recherche d'implémentation de projet ATL, et permettent le partage de code de document avec ce projet.
#ifndef SHARED_HANDLERS
#include "TP6_M1_2017.h"
#endif

#include "TP6_M1_2017Doc.h"

#include <propkey.h>

#include "Saisie.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CTP6_M1_2017Doc

IMPLEMENT_DYNCREATE(CTP6_M1_2017Doc, CDocument)

BEGIN_MESSAGE_MAP(CTP6_M1_2017Doc, CDocument)
	ON_COMMAND(ID_RESOLUTION_EQUATION2DEG, &CTP6_M1_2017Doc::OnResolutionEquation2deg)
END_MESSAGE_MAP()


// construction ou destruction de CTP6_M1_2017Doc

CTP6_M1_2017Doc::CTP6_M1_2017Doc()
	: m_pTexte(NULL)
	, m_info(_T(""))
{
	// TODO: ajoutez ici le code d'une construction unique
	m_SD = NULL;
}

CTP6_M1_2017Doc::~CTP6_M1_2017Doc()
{
	if (m_pTexte != NULL)delete m_pTexte; m_pTexte = NULL;
	if (m_SD != NULL)delete m_SD; m_SD = NULL;
}

BOOL CTP6_M1_2017Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ajoutez ici le code de réinitialisation
	// (les documents SDI réutiliseront ce document)
	m_info = _T("Bienvenue");
	m_pTexte = new CString;
	*m_pTexte = _T("Nous sommes les M1 MARS.");

	/*double a = 4; double b = 6; double c = 1;
	m_SD = new CSecDeg(a, b, c);*/

	return TRUE;
}




// sérialisation de CTP6_M1_2017Doc

void CTP6_M1_2017Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: ajoutez ici le code de stockage
	}
	else
	{
		// TODO: ajoutez ici le code de chargement
	}
}

#ifdef SHARED_HANDLERS

// Prise en charge des miniatures
void CTP6_M1_2017Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// Modifier ce code pour dessiner les données du document
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// Support pour les gestionnaires de recherche
void CTP6_M1_2017Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// Définir le contenu de recherche à partir des données du document. 
	// Les parties du contenu doivent être séparées par ";"

	// Par exemple :  strSearchContent = _T("point;rectangle;circle;ole object;");
	SetSearchContent(strSearchContent);
}

void CTP6_M1_2017Doc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// diagnostics pour CTP6_M1_2017Doc

#ifdef _DEBUG
void CTP6_M1_2017Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTP6_M1_2017Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// commandes pour CTP6_M1_2017Doc


CString CTP6_M1_2017Doc::get_info()
{
	return m_info;
}


CString* CTP6_M1_2017Doc::get_texte()
{
	return m_pTexte;
}


CSecDeg* CTP6_M1_2017Doc::get_m_SD()
{
	return m_SD;
}


void CTP6_M1_2017Doc::OnResolutionEquation2deg()
{
	// TODO: ajoutez ici le code de votre gestionnaire de commande
	CSaisie Dlg; 
	double a = 0; double b = 0; double c = 0;

	if (Dlg.DoModal() == IDOK)
	{
		a = Dlg.get_m_a();
		b = Dlg.get_m_b();
		c = Dlg.get_m_c();
		m_SD = new CSecDeg(a, b, c);
		UpdateAllViews(0);
	}
}
