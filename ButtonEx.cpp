// CButtonEx.cpp : implementation file   
//   
#include "StdAfx.h"   
#include "ButtonEx.h"   

// CButtonEx   
IMPLEMENT_DYNAMIC(CButtonEx, CMFCButton)
CButtonEx::CButtonEx()   
{   
	m_nFlatStyle = CMFCButton::BUTTONSTYLE_NOBORDERS;
	m_bTransparent = false;
}
   
CButtonEx::~CButtonEx()   
{   
}

BEGIN_MESSAGE_MAP(CButtonEx, CMFCButton)   
    //{{AFX_MSG_MAP(CButtonEx)
    //}}AFX_MSG_MAP
END_MESSAGE_MAP()

BOOL CButtonEx::EnableWindow(BOOL bEnable)
{
	if (bEnable) {
		SetTextColor(m_TextColor);
		SetFaceColor(m_FaceColor, true);
	}
	else {
//		SetTextColor(RGB(123, 123, 123));
		SetTextColor(RGB(0, 0, 0));
		SetFaceColor(RGB(222, 222, 222), true);
	}
	return CMFCButton::EnableWindow(bEnable);
}
