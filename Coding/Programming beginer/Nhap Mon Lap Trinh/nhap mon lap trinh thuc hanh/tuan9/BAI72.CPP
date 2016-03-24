#include "conio.h"
#include "stdio.h"
#include "math.h"
void nhap(int a[],int n)
{
	for (int i=0;i<n;i++)
	{
		printf("\nNhap phan tu a[%d]:",i+1);
		scanf("%d",&a[i]);
	}
}
void xuat (int a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}
int ktratg(int a[],int n)
{
	for(int i=0;i<n-1;i++)
		if (a[i]>a[i+1])
			return 0;
	return 1;
}
int ktragi(int a[],int n)
{
	for (int i=0;i<n-1;i++)
		if (a[i]<a[i+1])
			return 0;
	return 1;
}
void dem(int a[],int n)
{
	int i,d;
	d=0;
	for (i=0;i<n;i++)
		if (a[i]<0)
			d=d+1;
	printf("\nCo %d phan tu am trong mang ",d);
}
void maxmin(int a[],int n)
{
	int i,max,min;
	max=a[0];
	min=a[0];
	for (i=1;i<n;i++)
		if (a[i]>max)
			max=a[i];
	for (i=1;i<n;i++)
		if(min>a[i])
			min=a[i];
	printf("\nPhan tu max cua mang: %d",max);
	printf("\nPhan tu min cua mang: %d",min);
}
void tim(int a[],int n)
{
	int i,dg,am;
	dg=0;
	am=0;
	for (i=0;i<n;i++)
		if (a[i]>0)
			if (dg==0)
				dg=a[i];
			else if (a[i]<dg)
				dg=a[i];
	for (i=0;i<n;i++)
		if (a[i]<0)
			if (am==0)
				am=a[i];
			else if (a[i]>am)
				am=a[i];
	if (dg!=0)
		printf("\nPhan tu duong nho nhat %d",dg);
	else
		printf("\nMang khong co phan tu duong");
	if(am!=0)
		printf("\nPhan tu am lon nhat %d",am);
	else
		printf("\nMang khong co phan tu am");

}
int ngto(int n)
{
	for(int i=2;i<n;i++)
		if (n%i==0)
			return 0;
	return 1;
}
void chpg(int n)
{
	for (int i=1;i<=sqrt(n);i++)
		if (i*i==n)printf("so cp la: %d",n);
		else printf("%d ko la so chinh phuong",n);

}
/*void lietke(int a[],int n)
{
	int i;
	printf("\nSo nguyen to trong mang:");
	for(i=0;i<n;i++)
		if(a[i]>0)
			if (ngto(a[i]))
				printf("%d ",a[i]);
	printf("\nSo chinh phuong trong mang:");
	for(i=0;i<n;i++)
		if (a[i]>0)
			if (chpg(a[i]))?
				printf("%d ",a[i]);

}*/
void tach(int a[],int na,int b[],int &nb,int c[],int &nc)
{
	int i;
	for (i=0;i<na;i++)
	{	if (a[i]>0)
			b[nb++]=a[i];
		if (a[i]<0)		 //so 0 ko am ko duong
			c[nc++]=a[i];
	}
	printf("\nMang duong:");
	xuat(b,nb);
	printf("\nMang am:");
	xuat(c,nc);
}
void gopmang(int a[],int b[],int &nb,int c[],int &nc)
{
	int i,na;
	na=nb+nc;
	if ((nb-nc==1||nb-nc==0)&&(na>1))
	{  	nb=0;
		nc=0;
		for(i=0;i<na;i++)
		{
			if (i%2==0)
				a[i]=b[nb++];
			else
				a[i]=c[nc++];
		}
		printf("\nMang gop am duong xen ke:");
		xuat(a,na);
	}
	else  if ((nc-nb==1)&&(na>1))
	{  	nb=0;
		nc=0;
		for(i=0;i<na;i++)
		{
			if (i%2==0)
				a[i]=c[nc++];
			else
				a[i]=b[nb++];
		}
		printf("\nMang gop am duong xen ke:");
		xuat(a,na);
	}
	else
		printf("\nKhong the gop thanh 1 mang am duong xen ke duoc");
}

void main ()
{
	int a[100],b[100],c[100];
	int na,nb=0,nc=0;
	clrscr();
	do
	{
		printf("Nhap N thoa dk 0<N<=100:");
		scanf("%d",&na);
	}
	while ((na<=0)||(na>101));
	nhap(a,na);
	clrscr();
	xuat(a,na);
	dem(a,na);
	maxmin(a,na);
	tim(a,na);
	if (ktratg(a,na)&&na>1)
		printf("\nMang da duoc xap xep theo tang");
	else if (ktragi(a,na)&&na>1)
		printf("\nMang da duoc xap xep giam");
	else
		printf("\nMang chua duoc xap xep hoac mang chi co 1 phan tu");
       //	lietke(a,na);
        chpg(na);
	tach(a,na,b,nb,c,nc);
	gopmang(a,b,nb,c,nc);
	getch();
	// xoa 5 dong duoi'
	clrscr();
	for (int i=1;i<=40;i++)
	printf("\n^_________________^TiaChot^________________^");
	printf("\nChuc noel vui ve~ Jing co beo Jing co beo");
	getch();
}

