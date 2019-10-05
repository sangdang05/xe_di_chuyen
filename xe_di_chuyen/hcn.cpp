#include "stdafx.h"
#include "hcn.h"


hcn::hcn()
{
}
void hcn::thietlap(int mx1, int my1, int mx3, int my3)
{
	x1 = mx1; x3 = mx3;
	y1 = my1; y3 = my3;
}
void hcn::vehcn(CClientDC *pDC)
{
	pDC->Rectangle(x1, y1, x3, y3);
}
hcn::~hcn()
{
}
