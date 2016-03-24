#include "stdio.h"
#include "conio.h"
#include "math.h"
void main ()
{
	float a,b,c,a1,b1,c1,d,dx,dy,x,y;
	clrscr();
	printf("Nhap vao a:");scanf("%f",&a);
	printf("\nNhap vao b:");scanf("%f",&b);
	printf("\nNhap vao c:");scanf("%f",&c);
	printf("\nNhap vao a1:");scanf("%f",&a1);
	printf("\nNhap vao b1:");scanf("%f",&b1);
	printf("\nNhap vao c1:");scanf("%f",&c1);
	d=a*b1-b*a1;
	dx=c*b1-b*c1;
	dy=a*c1-c*a1;
	if (d!=0)
	{
		x=float(dx/d);
		y=float(dy/d);
		printf("\nPt co nghiem:");
		printf("\nx = %.2f",x);
		printf("\ny = %.2f",y);
	}
	else if ((d==0) && (dx==0) && (dy==0))
		printf("PT co VSN");
	else
		printf("PT VN");
	getch();
}
