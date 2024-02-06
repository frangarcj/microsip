#pragma once 

#include "const.h"
#include "afxbutton.h"

class CButtonEx : public CMFCButton 
{ 
	DECLARE_DYNAMIC(CButtonEx) 
public: 
	CButtonEx();
	virtual ~CButtonEx();
	COLORREF        m_FaceColor; 
	COLORREF        m_TextColor;
private:
protected: 
	DECLARE_MESSAGE_MAP()
public: 
	BOOL EnableWindow(BOOL bEnable = TRUE);
};
