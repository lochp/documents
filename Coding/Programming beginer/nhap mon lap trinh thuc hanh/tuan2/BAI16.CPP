#include "stdio.h"
#include "conio.h"
#include "math.h"
void timbk()
{
	float dt,r;
	printf("Nhap vao ban dien tich duong tron :");scanf("%f",&dt);
	r=sqrt(dt/3.14);
	printf("Ban kinh cua duong tron : %.2f",r);
}
void timbk1()
{
	float dt,cv,r;
	printf("Nhap vao chu vi duong tron :");scanf("%f",&cv);
	r=cv/3.14;
	printf("Ban kinh cua duong tron : %.2f\n",r);
	dt=3.14 *pow (r,2);
	printf("Dien tich cua duong tron : %.2f",dt);
}
void hcn()
{
	float a,b,cv,dt,d;
	printf("Nhap vao chu vi HCN :");scanf("%f",&cv);
	printf("Nhap vao dien tich HCN :");scanf("%f",&dt);
	d=pow(cv,2)-4*dt;
	if(d>0)
	{
		a=(-cv+sqrt(d))/(2);
		b=(-cv-sqrt(d))/(2);
		printf("Chieu dai cua HCN : %.2f \n",a);
		printf("Chieu rong cua HCN: %.2f ",b);
	}
	else
        	printf("CV va DT cua ban nhap vao la vo ly");
}

void main()
{
	clrscr();
	timbk();
	getch();
	clrscr();
	timbk1();
	getch();
	clrscr();
	hcn();
        getch();
}
