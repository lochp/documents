#include "conio.h"
#include "stdio.h"
#include "math.h"
void hcn ()
{
	float a,b;
	printf("Nhap vao chieu dai :");scanf("%f",&a);
	printf("Nhap vao chieu rong :");scanf("%f",&b);
	printf("Chu vi hinh chu nhat : %.2f \n",a+b);
	printf("Dien tich hinh chu nhat : %.2f \n",a*b);
}
void tg ()
{

	float a,b,h,dt;
	printf("Nhap vao canh thu 1 :");scanf("%f",&a);
	printf("Nhap vao 2 canh = nhau :");scanf("%f",&b);
	printf("Chu vi tam giac can : %.2f \n",a+2*b);
	h=sqrt(b*b-1.0/4*a*a);
	dt=1.0/2*h*a;
	printf("Dien tich tam giac can : %.2f",dt);
}
void htg()
{
	float a,b,be,dt;
	printf("Nhap canh nho :");scanf("%f",&a);
	printf("Nhap canh lon :");scanf("%f",&b);
	printf("Nhap canh ben :");scanf("%f",&be);
	printf("Chu vi cua hinh thang can : %.2f",a+b+2*be);
}

void main()
{
	clrscr();
	hcn();
        getch();
	clrscr();
	tg();
	getch();
	clrscr();
	htg();
        getch();

}