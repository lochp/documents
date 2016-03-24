#include "stdio.h"
#include "conio.h"
void hvg (int n)
{
	int i,j;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
			if ((i==1)||(j==1)||(j==n)||(i==n))
			printf("*");
		else
                	printf(" ");
		printf("\n");
	}
}
void hcn (int x,int y)
{
	int i,j;
	for (i=1;i<=x;i++)
	{
		for (j=1;j<=y;j++)
			if ((i==1)||(i==x)||(j==1)||(j==y))
			printf("*");
		else
                	printf(" ");
		printf("\n");
	}
}
void tgiac (int n)
{	int i,j;
	for (i=0;i<n;i++)
	{
		for (j=1;j<=(2*n-1);j++)
			if ((j==(n-i))||(j==(n+i))||(i==(n-1)))
			       printf("*");
			else
				printf(" ");
		printf("\n");
	 }
}
void tgiacan (int n)
{
	int i,j;
	for (i=0;i<n;i++)
	{
		for (j=1;j<=(2*n-1);j++)
			if (((j>=(n-i))&&(j<=(n+i)))||(i==n))
				printf("*");
			else
				printf(" ");
		printf("\n");
	}
}
void hbh (int n)
{
	int i,j;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
	for (i=2;i<=n;i++)
	{
		for (j=1;j<=n;j++)
			if (j>=i)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}
}
void hbh1 (int n)
{
	int i,j;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
			if (i==j||j==1)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}
	for (i=2;i<=n;i++)
	{
		for (j=1;j<=n;j++)
			if (j==n||j==i)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}
}


void main ()
{
	int n,x,y;
	clrscr();
	printf("Nhap canh hing vg:");
	scanf("%d",&n);
	printf("Nhap chieu dai:");scanf("%d",&y);
	printf("Nhap chieu rong:");scanf("%d",&x);

	hvg(n);
	printf("\n");
	hcn(x,y);
	printf("\n");
	tgiac(n);
	printf("\n");
	tgiacan(n);
	printf("\n");
	hbh1(n);
	printf("\n");
	hbh(n);
	getch();
}