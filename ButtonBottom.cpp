// CButtonBottom.cpp : implementation file   
//   
#include "StdAfx.h"   
#include "ButtonBottom.h"   

// CButtonBottom   
IMPLEMENT_DYNAMIC(CButtonBottom, CMFCButton)
CButtonBottom::CButtonBottom()   
{   
	m_nFlatStyle = CMFCButton::BUTTONSTYLE_NOBORDERS;
	m_bTransparent = false;
	m_bDrawFocus = FALSE;
}
   
CButtonBottom::~CButtonBottom()   
{   
}

BEGIN_MESSAGE_MAP(CButtonBottom, CMFCButton)   
    //{{AFX_MSG_MAP(CButtonBottom)
	ON_WM_CREATE()
	ON_WM_ERASEBKGND()
    //}}AFX_MSG_MAP
END_MESSAGE_MAP()

int CButtonBottom::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	textColor = RGB(0, 0, 0);
	faceColor = RGB(255, 255, 255);
	UpdateColor();
	return CMFCButton::OnCreate(lpCreateStruct);
}

BOOL CButtonBottom::OnEraseBkgnd(CDC* pDC)
{
	UpdateColor();
	return CMFCButton::OnEraseBkgnd(pDC);
}

void CButtonBottom::UpdateColor(int nCheck)
{
	if (nCheck == -1) {
		nCheck = GetCheck();
	}
	if (nCheck) {
		SetTextColor(RGB(255, 255, 255));
//		SetFaceColor(RGB(255, 0, 0), true);
		SetFaceColor(RGB(11, 91, 202), true);
	} else {
		SetTextColor(textColor);
		SetFaceColor(faceColor);
	}
}

void CButtonBottom::SetCheck(int nCheck)
{
	CMFCButton::SetCheck(nCheck);
	UpdateColor(nCheck);
}
