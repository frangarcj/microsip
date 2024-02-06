#pragma once 

#include "const.h"
#include "afxbutton.h"

class CButtonBottom : public CMFCButton 
{ 
	DECLARE_DYNAMIC(CButtonBottom) 
public: 
	CButtonBottom();
	virtual ~CButtonBottom();
private:
	void UpdateColor(int nCheck = -1);
	COLORREF faceColor;
	COLORREF textColor;
protected: 
	DECLARE_MESSAGE_MAP()
public: 
	void SetCheck(int nCheck);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	virtual BOOL CButtonBottom::OnEraseBkgnd(CDC* pDC);
};
