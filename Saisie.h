#pragma once


// Boîte de dialogue CSaisie

class CSaisie : public CDialog
{
	DECLARE_DYNAMIC(CSaisie)

public:
	CSaisie(CWnd* pParent = NULL);   // constructeur standard
	virtual ~CSaisie();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SecDeg };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
private:
	double m_a;
	double m_b;
	double m_c;
public:
	double get_m_a();
	double get_m_b();
	double get_m_c();
};
