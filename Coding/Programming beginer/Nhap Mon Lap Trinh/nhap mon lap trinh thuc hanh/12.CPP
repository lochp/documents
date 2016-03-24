#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
	{
	clrscr();
	int n;
	float x,kq;
	printf("Moi ban nhap gia tri x= ");
	scanf("%f", &x);
	printf("\nMoi ban nhap gia tri n= ");
	scanf("%d", &n);
	kq=pow(x*x+1,n);
	printf("(%.2f*%.2f+1)^%d=%.2f", x,x,n,kq);
	getch();

	}