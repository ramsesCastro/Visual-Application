
// TP6_M1_2017View.cpp : implémentation de la classe CTP6_M1_2017View
//

#include "stdafx.h"
// SHARED_HANDLERS peuvent être définis dans les gestionnaires d'aperçu, de miniature
// et de recherche d'implémentation de projet ATL, et permettent le partage de code de document avec ce projet.
#ifndef SHARED_HANDLERS
#include "TP6_M1_2017.h"
#endif

#include "TP6_M1_2017Doc.h"
#include "TP6_M1_2017View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTP6_M1_2017View

IMPLEMENT_DYNCREATE(CTP6_M1_2017View, CView)

BEGIN_MESSAGE_MAP(CTP6_M1_2017View, CView)
	// Commandes d'impression standard
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// construction ou destruction de CTP6_M1_2017View

CTP6_M1_2017View::CTP6_M1_2017View()
{
	// TODO: ajoutez ici du code de construction

}

CTP6_M1_2017View::~CTP6_M1_2017View()
{
}

BOOL CTP6_M1_2017View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: changez ici la classe ou les styles Window en modifiant
	//  CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// dessin de CTP6_M1_2017View

void CTP6_M1_2017View::OnDraw(CDC* pDC)
{
	CTP6_M1_2017Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ajoutez ici le code de dessin pour les données natives
	pDC->TextOutW(45, 45, pDoc->get_info());
	pDC->TextOutW(45, 65, *pDoc->get_texte());
	//pDC->TextOutW(45, 85, pDoc->get_m_SD()->resoudre());
	if (pDoc->get_m_SD() != NULL)
	{
		pDC->TextOutW(45, 85, pDoc->get_m_SD()->resoudre());
	}
}


// impression de CTP6_M1_2017View

BOOL CTP6_M1_2017View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// préparation par défaut
	return DoPreparePrinting(pInfo);
}

void CTP6_M1_2017View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ajoutez une initialisation supplémentaire avant l'impression
}

void CTP6_M1_2017View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ajoutez un nettoyage après l'impression
}


// diagnostics pour CTP6_M1_2017View

#ifdef _DEBUG
void CTP6_M1_2017View::AssertValid() const
{
	CView::AssertValid();
}

void CTP6_M1_2017View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTP6_M1_2017Doc* CTP6_M1_2017View::GetDocument() const // la version non Debug est inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTP6_M1_2017Doc)));
	return (CTP6_M1_2017Doc*)m_pDocument;
}
#endif //_DEBUG


// gestionnaires de messages pour CTP6_M1_2017View
