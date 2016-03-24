#include<conio.h>
#include<stdio.h>
#include<math.h>

void main()
{
	clrscr();

	int n;
	float x, kq;

	printf("Ban hay nhap 1 so thuc x=");
	scanf("%f", &x);
	printf("Ban hay nhap 1 so nguyen n=");
	scanf("%d", &n);

	kq=pow(x*x+1,n);

	printf("(%0.2f^2+1)^%d = %.2f", x,n,kq);

	//printf("(x^2+1)^n = %.2f", kq);
	//printf("Ket qua la %.2f", kq);


	getch();
}