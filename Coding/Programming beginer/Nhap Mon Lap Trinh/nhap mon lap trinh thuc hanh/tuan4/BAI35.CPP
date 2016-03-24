#include "stdio.h"
#include "conio.h"
#include "math.h"
void main ()
{
	int n,d;
	clrscr();
	printf("Nhap vao 1 so:");
	scanf("%d",&n);
	d=0;
	do
	{
		n=n/10;
		d=d+1;
	}
	while (n!=0);
	printf("So do co %d chu so",d);
	getch();
}

