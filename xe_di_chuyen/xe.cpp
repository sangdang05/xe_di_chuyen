#include "stdafx.h"
#include "xe.h"


xe::xe()
{
}
void xe::vexe(CClientDC *pDC)
{
	x2 = x3; y2 = y1;
	x4 = x1; y4 = y3;
	//thiet lap banh sau
	x5 = x1; y5 = y3-10;
	x6 = x1 + 30; y6 = y4 + 20;
	//thiet lap banh truoc
	x7 = x3-30; y7 = y3 - 10;
	x8 = x3; y8 = y3 + 20;
	//thiet lap dau xe
	x9 = x2; y9 = ((y2 + y3) / 2)-10;
	x10 = x3 + 30; y10 = y3;
	//ve than
	than.thietlap(x1, y1, x3, y3);
	than.vehcn(pDC);
	bx1.thietlap(x5, y5, x6, y6);
	bx1.vehtron(pDC);
	bx2.thietlap(x7, y7, x8, y8);
	bx2.vehtron(pDC);
	dau.thietlap(x9, y9, x10, y10);
	dau.vehcn(pDC);
}
void xe::vexenguoc(CClientDC *pDC)
{
	x2 = x3; y2 = y1;
	x4 = x1; y4 = y3;
	//thiet lap banh sau
	x5 = x1; y5 = y3 - 10;
	x6 = x1 + 30; y6 = y4 + 20;
	//thiet lap banh truoc
	x7 = x3 - 30; y7 = y3 - 10;
	x8 = x3; y8 = y3 + 20;
	//thiet lap dau xe
	x9 = x1; y9 = ((y1 + y4) / 2) - 10;
	x10 = x4 - 30; y10 = y4;
	//ve than
	
	than.thietlap(x1, y1, x3, y3);
	than.vehcn(pDC);
	
	bx1.thietlap(x5, y5, x6, y6);
	bx1.vehtron(pDC);
	bx2.thietlap(x7, y7, x8, y8);
	bx2.vehtron(pDC);
	dau.thietlap(x9, y9, x10, y10);
	dau.vehcn(pDC);
}
void xe::dichuyenphai()
{
	x1 += 20;
	x3 += 20;
}
void xe::dichuyentrai()
{
	x1 -= 20;
	x3 -= 20;
}
void xe::di_chuyen_xe_phai(CClientDC *pDC)
{
	CPen *pen;
	pen = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	CPen *oldpen;
	int i = 0;
	while (i < 5)
	{
		vexe(pDC);
		Sleep(100);
		oldpen = pDC->SelectObject(pen);//chon but ve
		vexe(pDC);
		dichuyenphai();
		pen = pDC->SelectObject(oldpen);
		i++;
	}
}
void xe::di_chuyen_xe_trai(CClientDC *pDC)
{
	CPen *pen;
	pen = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	CPen *oldpen;
	int i = 0;
	while (i < 5)
	{
		vexenguoc(pDC);
		Sleep(100);
		oldpen = pDC->SelectObject(pen);//chon but ve
		vexenguoc(pDC);
		dichuyentrai();
		pen = pDC->SelectObject(oldpen);
		i++;
	}
}
xe::~xe()
{
}
