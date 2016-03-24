#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
	{
	clrscr();
	float a,b,c,d,h,cv,dt;
	printf("Moi ban nhap day nho a= ");
	scanf("%f", &a);
	printf("\nMoi ban nhap day lon b= ");
	scanf("%f", &b);
	printf("\nMoi ban nhap canh ben c= ");
	scanf("%f", &c);
	d=(b-a)/2;
	h=sqrt(pow(c,2)-pow(d,2));
	dt=((a+b)*h)/2;
	cv=a+b+2*c;
	printf("Chu vi Ht=%.2f\nDien tich Ht=%.2f",cv,dt);
	getch();

	}