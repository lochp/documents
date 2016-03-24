#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef int elem;
#include"sort.cpp"
void nhap(elem a[], int &n)
{
	printf("Nhap so pt chuoi: ");
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
void xuat(elem a[],int n)
{
	printf("\nNoi dung mang: ");
	for(int i=0; i<n; i++)
  		printf("%4d",a[i]);
}

int ss(int x,int y)
{
	return x-y;
}
main()
{

	elem a[10];
	int n;
	nhap(a,n);
	xuat(a,n);
	insertionsort(a,n,ss);
	xuat(a,n);
	getch();
}


