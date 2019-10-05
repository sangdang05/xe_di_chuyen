
// xe_di_chuyenView.h : interface of the CxedichuyenView class
//

#pragma once
#include"hcn.h"
#include"htron.h"
#include"xe.h"
class CxedichuyenView : public CView
{
protected: // create from serialization only
	CxedichuyenView() noexcept;
	DECLARE_DYNCREATE(CxedichuyenView)

// Attributes
public:
	CxedichuyenDoc* GetDocument() const;

// Operations
public:
	xe xe1;
	int check_key;
// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CxedichuyenView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // debug version in xe_di_chuyenView.cpp
inline CxedichuyenDoc* CxedichuyenView::GetDocument() const
   { return reinterpret_cast<CxedichuyenDoc*>(m_pDocument); }
#endif

