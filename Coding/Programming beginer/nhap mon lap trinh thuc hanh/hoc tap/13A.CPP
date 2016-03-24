#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
	{
	clrscr();
	float a,b,cv,dt;
	printf("Moi ban nhap chieu rong a= ");
	scanf("%f", &a);
	printf("\nMoi ban nhap chieu dai b= ");
	scanf("%f", &b);
	cv=(a+b)*2;
	dt=a*b;
	printf("Chu vi hcn=%.2f\nDien tich hcn=%.2f",cv,dt);
	getch();
	}