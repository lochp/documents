#include "conio.h"
#include "stdio.h"
#include "math.h"
void xeploai (int t,int l,int h)
{
	float tb;
        tb=float(t+l+h)/3;
	printf("Diem trung binh : %.2f \n",tb);
	if (tb>=9)
		printf("Xuat Xac");
	else if (tb>=7&&tb<9)
		printf ("Gioi");
	else if (tb<7&&tb>=5)
		printf("Kha");
	else if (tb<5&&tb>=3)
		printf("Trung Binh");
	else
		printf("Yeu");
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