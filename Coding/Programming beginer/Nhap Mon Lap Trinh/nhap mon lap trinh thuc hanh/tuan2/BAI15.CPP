#include "conio.h"
#include "stdio.h"
#include "math.h"
void xeploai (int t,int l,int h)
{
	float tb;
        tb=float(t+l+h)/3;
	printf("Diem trung binh 3 mon : %.2f \n",tb);
}
void main ()
{
	int t,h,l;
	clrscr();
	printf("Nhap diem mon toan :");scanf("%d",&t);
	printf("Nhap diem mon Ly :");scanf("%d",&l);
	printf("Nhap diem mon Hoa :");scanf("%d",&h);
	xeploai(t,l,h);
	getch();
}