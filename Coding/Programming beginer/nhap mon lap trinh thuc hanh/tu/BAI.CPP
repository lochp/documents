#include<math.h>
#include<stdio.h>
#include<conio.h>
void nhap(int a[], int n)
{	for(int i=0;i<n;i++)
	{	printf("Nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
void xuat(int a[], int n)
{	for(int i=0;i<n;i++)
	printf("%3d",a[i]);
}
int tong(int a[], int n)
{	int tong=0;
	for(int i=0;i<n;i++)
	tong+=a[i];
	return tong;
}
void max(int a[], int n)
{	int max =0;
	int lon=a[0];
	for(int i=1;i<n;i++)
		if(a[max]<a[i])
		{
			max=i;
			lon=a[i];


		}
		printf("\nso' lon' nhat la :%d",lon);
		printf("\nthu' tu mang lon' nhat la` : %d",max);






}
int soNgto(int x)
{
	for(int i=2;i<=sqrt(x);i++)
	if(x%i==0)
	return 0;
	return 1;
}
void dem(int a[], int n)
{       int dem=0;
	for(int i=0;i<n;i++)
	if(a[i]>0&&soNgto(a[i]))
	{	dem=dem+1;
		printf("so ng to' co' trong mang la`:%d",dem);
	}
	else

}





void main()
{       clrscr();
	int n,a[10],tg;
	printf("ban hay nhap n= ");
	scanf("%d",&n);
	nhap(a,n);
	xuat(a,n);
	tg=tong(a,n);
	printf("\nTong cua~ mang la` : %d", tg);
	max(a,n);
	getch();
}
