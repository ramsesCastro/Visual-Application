
// TP6_M1_2017View.h : interface de la classe CTP6_M1_2017View
//

#pragma once


class CTP6_M1_2017View : public CView
{
protected: // création à partir de la sérialisation uniquement
	CTP6_M1_2017View();
	DECLARE_DYNCREATE(CTP6_M1_2017View)

// Attributs
public:
	CTP6_M1_2017Doc* GetDocument() const;

// Opérations
public:

// Substitutions
public:
	virtual void OnDraw(CDC* pDC);  // substitué pour dessiner cette vue
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implémentation
public:
	virtual ~CTP6_M1_2017View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Fonctions générées de la table des messages
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // version debug dans TP6_M1_2017View.cpp
inline CTP6_M1_2017Doc* CTP6_M1_2017View::GetDocument() const
   { return reinterpret_cast<CTP6_M1_2017Doc*>(m_pDocument); }
#endif

