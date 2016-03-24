#include "conio.h"
#include "stdio.h"
#include "math.h"
int usc (int a,int b)
{
	a=abs(a);
	b=abs(b);
	while (a!=b)
		if (a>b)
			a=a-b;
		 else
			b=b-a;
	return a;
}
void main ()
{
	int a,b,ucln,bcnn;
	clrscr();
	printf("a:");scanf("%d",&a);
	printf("b:");scanf("%d",&b);
	ucln=usc(a,b);
	bcnn=(a*b)/ucln;
	printf("UCLN:%d",ucln);
	printf("\nBCNN:%d",bcnn);
	getch();
}