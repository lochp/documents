#include "stdio.h"
#include "conio.h"
#include "math.h"
int chinhfg(int n)
{
	for(int i;i<=sqrt(n);i++)
		if (i*i==n)
			return 1;
	return 0;
}
void main ()
{
	int n,d;
        clrscr();
	printf("Nhap vao so n:");
	scanf("%d",&n);
	d=0;
	if (chinhfg(n)==1)
		printf("So do la so chinh phuong");
	else

		do
		{
			n=n-1;
			if (chinhfg(n)==1)
				d=1;

		 }
	 while (d==0);
	 if (d==1)
		printf("So chinh phuong nho hon va gan do la %d",n);
	 getch();
}









