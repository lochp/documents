#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

void nhapmang(int a[][20],int n,int m)

{
	randomize();
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		a[i][j]=random(201)-100;
}
void xuatmang(int a[][20],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		printf("%5d",a[i][j] );
	printf("\n");

	}
}
void tong(int a[][20],int n, int m)
{
int tong =0;
	if (n<m)
	{
	for(int i=0;i<n;i++)
	{

		for(int j=0; j<=i; j++)
		{
		  if (i=j)
		  {
		  tong+= a[i][j];
		  }
		}
	}
	}
	else
	{
	for(int j=0;j<m;j++)
	{

		for(int i=0; i<=j; i++)
		{
		  if (i=j)
		  {
		  tong+= a[i][j];
		  }
		}
	}
	}
	printf ("\nTong la: %d",tong);
}








void main()
{
	clrscr();

	int a[20][20],n,m;
	printf("Nhap dong n : ");
	scanf("%d",&n);
	printf("Nhap cot m : ");
	scanf("%d",&m);
	nhapmang(a,n,m);
	xuatmang(a,n,m);
	tong(a,n,m);
	getch();
}