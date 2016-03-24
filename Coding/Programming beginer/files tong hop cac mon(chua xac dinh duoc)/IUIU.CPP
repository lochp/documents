#include<stdio.h>
#include<conio.h>
int comp(int x,int y)

{
	return x>y;
}
void hoanvi(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void nhap(int a[],int &n)
{
	printf("Nhap so phan tu cua mang");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Nhap a[%d] ",i+1);
		scanf("%d",&a[i]);
	}
}
void xuat(int a[],int n)
{       printf("Mang la");
	for(int i=0;i<n;i++)
	printf("%3d",a[i]);
}
void bubldesort(int a[],int n,int (*comp)(int ,int))
{
	for(int i=0;i<n-2;i++)
		for(int j=n-1;j>i;j--)

		if(comp(a[j-1],a[j]))
		hoanvi(a[j-1],a[j]);


}
int tanggiam(int x,int y)
{
	if(x%2==0&&y%2==0)
		return x<y;
	if(x%2==1&&y%2==1)
		return x>y;
		return 0;


}
void sstanggiam(int a[],int n,int (*tanggiam)(int ,int))
{
	for(int i=0;i<n-2;i++)
		for(int j=n-1;j>i;j--)

		if(tanggiam(a[j-1],a[j]))
		hoanvi(a[j-1],a[j]);


}
void main()
{
	clrscr();
	int a[50];
	int n;
	nhap(a,n);
	xuat(a,n);
	bubldesort(a,n,comp);
	printf("\nsap xep tang\n");
	xuat(a,n);
	sstanggiam(a,n,tanggiam);
	printf("\nsau khi sap xep:\n");
	xuat(a,n);
	getch();
}