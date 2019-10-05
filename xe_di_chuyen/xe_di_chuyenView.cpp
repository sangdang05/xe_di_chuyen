
// xe_di_chuyenView.cpp : implementation of the CxedichuyenView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "xe_di_chuyen.h"
#endif

#include "xe_di_chuyenDoc.h"
#include "xe_di_chuyenView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CxedichuyenView

IMPLEMENT_DYNCREATE(CxedichuyenView, CView)

BEGIN_MESSAGE_MAP(CxedichuyenView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// CxedichuyenView construction/destruction

CxedichuyenView::CxedichuyenView() noexcept
{
	// TODO: add construction code here
	xe1.thietlap(80, 130, 190, 170);//thiet lap toa do xe ban dau
}

CxedichuyenView::~CxedichuyenView()
{
}

BOOL CxedichuyenView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CxedichuyenView drawing

void CxedichuyenView::OnDraw(CDC* /*pDC*/)
{
	CxedichuyenDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC pDC(this);
	xe1.vexe(&pDC);
	// TODO: add draw code for native data here
}


// CxedichuyenView printing

BOOL CxedichuyenView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CxedichuyenView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CxedichuyenView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CxedichuyenView diagnostics

#ifdef _DEBUG
void CxedichuyenView::AssertValid() const
{
	CView::AssertValid();
}

void CxedichuyenView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CxedichuyenDoc* CxedichuyenView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CxedichuyenDoc)));
	return (CxedichuyenDoc*)m_pDocument;
}
#endif //_DEBUG


// CxedichuyenView message handlers


void CxedichuyenView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: Add your message handler code here and/or call default
	check_key = nChar;
	if (check_key == 37)
	{
		CClientDC pDC(this);
		CPen *pen;
		pen = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
		CPen *oldpen;
		oldpen = pDC.SelectObject(pen);
		xe1.vexe(&pDC);
		CPen *pen1;
		pen1 = new CPen(PS_SOLID, 1, RGB(0, 0, 0));
		CPen *oldpen1;
		oldpen1 = pDC.SelectObject(pen1);
		xe1.di_chuyen_xe_trai(&pDC);
		xe1.vexenguoc(&pDC);
	}
	if (check_key == 39)
	{
		CClientDC pDC(this);
		CPen *pen;
		pen = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
		CPen *oldpen;
		oldpen = pDC.SelectObject(pen);
		xe1.vexenguoc(&pDC);

		CPen *pen1;
		pen1 = new CPen(PS_SOLID, 1, RGB(0, 0, 0));
		CPen *oldpen1;
		oldpen1 = pDC.SelectObject(pen1);
		xe1.di_chuyen_xe_phai(&pDC);
		xe1.vexe(&pDC);
	}
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
