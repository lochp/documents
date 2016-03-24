#include "stdio.h"
#include "conio.h"
#include "math.h"
void main ()
{
	int n;
	float x,kg;
        clrscr();
	printf("Nhap vao so nguyen n :");
	scanf("%d",&n);
	printf("Nhap vap so thuc x :");
	scanf("%f",&x);
	kg=float (pow(pow(x,2)+1,n));
	printf("Ket qua : %.2f",kg);
	getch();
}