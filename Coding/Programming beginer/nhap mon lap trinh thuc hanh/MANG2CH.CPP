#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
/*
void mang2chieu(int a[][20],int n,int m)

{
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			printf("Nhap a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}

}*/
void mang2chieu(int a[][20],int n,int m)

{
	randomize();
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		a[i][j]=random(201)-100;
}					
void xuat(int a[][20],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		printf("%5d",a[i][j] );
	printf("\n");
	}
}
long tong(int a[][20],int n,int m)
{       long tong=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		tong+=a[i][j];
		return tong;
}
long tongduongvien(int a[][20],int n,int m)
{       long tong=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
                if(i==0||j==0||i==n-1||j==m-1)
		tong+=a[i][j];
		return tong;
}
long tongtgtren(int a[][20],int n)
{       long tong=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(i<=j)
				tong+=a[i][j];
        return tong;
}
long tongtgduoi(int a[][20],int n)
{       long tong=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(i>=j)
				tong+=a[i][j];
        return tong;
}
void main()
{
	clrscr();

	int a[20][20],n,m;
	printf("Nhap dong n : ");
	scanf("%d",&n);
	printf("Nhap cot m : ");
	scanf("%d",&m);
	mang2chieu(a,n,m);
	xuat(a,n,m);
	printf("Tong phan tu %ld  ",tong(a,n,m));
	printf("\nTong duong vien %ld  ",tongduongvien(a,n,m));
	printf("\nTong tam giac tren %ld  ",tongtgtren(a,n));
	printf("\nTong tam giac duoi %ld  ",tongtgduoi(a,n));
        getch();
}