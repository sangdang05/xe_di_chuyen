#pragma once
#include"hcn.h"
#include"htron.h"
class xe:public hcn
{
public:
	int x2, y2, x4, y4;
	int x5, y5, x6, y6;//ve banh sau
	int x7, y7, x8, y8;//ve banh truoc
	int x9, y9, x10, y10;//ve dau
	hcn than,dau;
	htron bx1, bx2;
	xe();
	void vexe(CClientDC *pDC);
	void vexenguoc(CClientDC *pDC);
	void dichuyenphai();
	void dichuyentrai();
	void di_chuyen_xe_phai(CClientDC *pDC);
	void di_chuyen_xe_trai(CClientDC *pDC);
	~xe();
};

