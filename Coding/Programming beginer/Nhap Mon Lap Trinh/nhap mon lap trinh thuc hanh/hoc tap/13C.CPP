#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
	{
	clrscr();
	float a,b,h,cv,dt;
	printf("Moi ban nhap day a= ");
	scanf("%f", &a);
	printf("\nMoi ban nhap canh ben b= ");
	scanf("%f", &b);
	h=sqrt(pow(b,2)-pow((a/2),2));
	cv=a+2*b;
	dt=a*h*1/2;
	printf("Chu vi tam giac=%.2f\nDien tich tam giac=%.2f",cv,dt);
	getch();
	}