#include "conio.h"
#include "stdio.h"
#include "math.h"
void thang (int n)
{
	for (int a=1;a<=n;a++)
	{
		for (int b=1;b<=a;b++)
			printf("*");
		printf("\n");
	}
	for (int i=1;i<=n-1;i++)
	{
		printf(" ");
		for (int j=1;j<=n-1;j++)
		       if (j>=i)
				printf("*");

		      else
				printf(" ");
		printf("\n");
	}
}
void vuong (int n)
{
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
			printf("*");
		printf("\n");
        }
}
void tgiac1(int n)
{
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=i;j++)
			printf("*");
                printf("\n");
	}
}
void tgiac2(int n)
{
	for (int i=1;i<=n;i++)
	{
		for (int j=n;j>=i;j--)
			printf("*");
		printf("\n");
	}
}
void tgiac3(int n)
{
	for (int i=1;i<=n-1;i++)
	{
		for (int j=1;j<=n-1;j++)
		       if (j>=i)
				printf("*");

		      else
				printf(" ");
		printf("\n");
	}
}
void tgiac(int n)
{
	for (int i=1;i<=n;i++)
	{
        	
void main ()
{
	int n;
	clrscr();
	printf("Nhap vao so n:");scanf("%d",&n);
	thang(n);
	printf("\n");
	vuong(n);
	printf("\n");
	tgiac1(n);
	printf("\n");
	tgiac2(n);
	printf("\n");
	tgiac3(n);
	getch();
}