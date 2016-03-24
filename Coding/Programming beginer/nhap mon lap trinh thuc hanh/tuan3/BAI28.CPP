#include "conio.h"
#include "stdio.h"
#include "math.h"
int ngto ( int n)
{
	for(int i=2;i<=sqrt(n);i++)
		if (n%i==0)
			return 0;
	return 1;
}
void main ()
{
	int n;
	clrscr();
	printf("Nhap so can kiem tra :");scanf("%d",&n);
	if (ngto(n)==1)
		printf("So %d la so nguyen to ",n);
	else
        	printf("So %d khong phai la so nguyen to ",n);

	getch();
}
