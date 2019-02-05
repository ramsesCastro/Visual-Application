
// TP6_M1_2017Doc.h : interface de la classe CTP6_M1_2017Doc
//


#pragma once
#include "SecDeg.h"


class CTP6_M1_2017Doc : public CDocument
{
protected: // cr�ation � partir de la s�rialisation uniquement
	CTP6_M1_2017Doc();
	DECLARE_DYNCREATE(CTP6_M1_2017Doc)

// Attributs
public:

// Op�rations
public:

// Substitutions
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// Impl�mentation
public:
	virtual ~CTP6_M1_2017Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Fonctions g�n�r�es de la table des messages
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Fonction d'assistance qui d�finit le contenu de recherche pour un gestionnaire de recherche
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
private:
	CString* m_pTexte;
	CString m_info;
public:
	CString get_info();
	CString* get_texte();
private:
	CSecDeg* m_SD;
public:
	CSecDeg* get_m_SD();
	afx_msg void OnResolutionEquation2deg();
};
