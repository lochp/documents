#include "stdio.h"
#include "conio.h"
#include "math.h"
void tinh(int n,int x)
{
	int i,t;
	float kg;
	t=1;
	kg=1;
	for (i=1;i<=n;i++)
	{
		t=t*i;
		kg=float (kg+pow(x,i)/t);
	}
	printf("Bai 41= %.2f",kg);
}
void tim41 (int x)
{
	int i,n;
	long t;
	float kq;
	kq=0;
	n=0;
	do
	{   t=1;
	    n=n+1;
	    for (i=1;i<=n;i++)
		t=t*i;
	    kq= float(pow(x,n)/t);




	}
	while (kq>0.00001);
	printf("So n=%d",n);

}

void tinh2(int x,int n)
{
	int i,j;
	long t;
	float kq;
	kq=0;
	for (i=0;i<=n-1;i++)
	{
		t=1;
		for (j=1;j<=2*i+1;j++)

			t=t*j;

		kq=kq+((pow(-1,i)*pow(x,2*i+1))/t);
	}
	printf("\n Bai 42 =%.2f",kq);

}



void main ()
{
	int x,n;
	clrscr();
	printf("Nhap vao so x :");
	scanf("%d",&x);
	printf("Nhap vao so n:");
	scanf("%d",&n);
	tinh(n,x);
	tinh2(x,n);
	getch();

}
