#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void nhap(int a[], int n)
{	randomize();
	for( int i=0; i<n; i++)
	    a[i]=random(201)-100;
}
void xuat(int a[], int n)
{
	for( int i=0; i<n; i++)
	  printf("%3d", a[i]);
}
int cau2(int a[], int n)
{
	int tong=0;
	printf("cac so duong chia het cho 3 la ");
	for(int i=0; i<n; i++)
	   if(a[i]>=0&&a[i]%3==0)
	    {  tong+=a[i];
	       printf("%4d", a[i]);
	    }
	return tong;
}
int cau3(int a[], int n)
{
	printf("cac phan tu co gia tri trong doan [-20,20]");
	int dem=0;
	for(int i=0; i<n; i++)
	   if(a[i]<=20&&a[i]>=-20)
  	         { dem+=1;        
	           printf(" %d", a[i]);
		 }
	return dem;
}
int cau4( int a[], int n)
{	int c,b ;
	printf("\n nhap phan tu muon thay the");
	scanf("%d", &c);
	printf("\n nhap gia tri can thay");
	scanf("%d",&b);
	printf("\nmang sau khi thay\n");
	for(int i=0; i<n; i++)
	   if(a[i]==c)
		 a[i]=b;
	xuat(a, n);
        return a[i];
}
void cau5( int a[], int n)
{       int b[100], c[100];
	int j=0, l=0;
	for( int i=0; i<n; i++)
	   if(a[i]%2==0)
	      b[j++]=a[i];
	   else
	      c[l++]=a[i];
	int o=0;
	for( int f=0; f<j; f++)
	    a[o++]=b[f];
	int p=0;
	for( int k=j; k<n; k++)
	    a[k]=c[p++];
	xuat(a, n);
}
 void main()
{
	clrscr();
	int a[100];  int b[100]; int c[100];
	int n, so, tong;
	printf("                  MENU                             "
	       "\n1.tao ngau nhien mang 1 chieu n phan tu nguyen gia tri [-100,100]"
	       "\n2.tinh tong cac so duong chia het cho 3 "
	       "\n3.dem va liet ke so phan tu co gia tri thuoc [-20,20]"
	       "\n4.thay 1 phan tu trong bang phan tu khac"
	       "\n5.sap xep mang"
	       "\n6.thoat"
	       "\n bam chon 1, 2, 3, 4, 5 hoac 6:\n\n");
	do
	{
	printf("\nnhap so 1, 2, 3, 4, 5, 6:");
	scanf("%d", &so);
	fflush(stdin);
	switch(so)
	{
	  case 1:
	    printf("nhap vao n=");
	    scanf("%d", &n);
	    printf("cac phan tu cua mang\n");
	    nhap(a, n);
	    xuat(a, n);
	    break;
	  case 2:
	    tong=cau2(a, n);
	    printf("\ntong cac so duong chia het cho 3 = %d", tong);
	    break;
	  case 3:
	    printf("\nso phan tu co gia tri trong doan [-20, 20] la %d",cau3(a, n));
            break;
	  case 4:
	    cau4(a, n);
	    break;
	  case 5:
	    printf("\nmang sau khi sap xep");
	    cau5(a,n);
	    break;
	  case 6:
	    printf("\nnhan phim Enter");
	    break;
	  default:
	    printf(" nhap lai so khac");
	}
    }
	while(so!=6);

	getch();

}