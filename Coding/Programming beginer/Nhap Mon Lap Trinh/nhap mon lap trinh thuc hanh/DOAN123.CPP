#include "stdio.h"
#include "conio.h"
#include "math.h"
#include "stdlib.h"
int safe=0;
void nhapmang(int a[][100],int *n,int *m)
{
	clrscr();
	randomize();
	do
	{
	printf("\nNhap so n:");
	scanf("%d",n);
	printf("\nNhap so m:");
	scanf("%d",m);
	}
	for(int i=0;i<*n;i++)
		for(int j=0;j<*m;j++)
			a[i][j]=random(210)-100;
}
void xuatmang(int a[][100],int n,int m)
{
	if (safe==1)
	{
	clrscr();
	for(int i=0;i<n;i++)
	  {
		for(int j=0;j<m;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	  }
	}
	else
	 printf("\nBan phai tao mang truoc khi chon chuc nang khac");
}
void xuatmang2(int a[][100],int n,int m)
{
	if (safe==1)
	{
	for(int i=0;i<n;i++)
	  {
		for(int j=0;j<m;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	  }
	}
	else 
	 printf("\nBan phai tao mang truoc khi chon chuc nang khac");
}

int min(int a,int b)
{
	if (a>b)
	  return b;
	else	
	 return a;
}
void sohoanthien(int a[][100],int n,int m)
{
	int dem=0;
	if (safe==1)
	{
	clrscr();
	int k,b[100]={0},j=0,tong;
	for( k=0;k<n;k++)
		for(int l=0;l<m;l++)
		{
			tong=0;
			j=0;
			for(int i=1;i<a[k][l];i++)
				if (a[k][l]%i==0) b[j++]=i;
			for(i=0;i<j;i++)
				tong+=b[i];
			if (tong==a[k][l])
			{
				printf("%4d",a[k][l]);
				dem++;
			}
		}
	if (dem==0) 
	 printf("\nMang khong co so hoan thien\n");
	}
	else 
	 printf("\nBan phai tao mang truoc khi chon chuc nang khac");
}
void chinhphuong(int a[][100],int n,int m)
{
	if (safe==1)
	{
	clrscr();
	int max,b[100]={0},k=0;
		double c;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{

			if(a[i][j]>0)
			{
				c=sqrt(a[i][j]);
				if(c-abs(c)==0) b[k++]=a[i][j];
			}
		}
	max=b[0];
	if(k==0)
	 printf("\nMang khong co so chinh phuong.\n");
	else
	{
		for(i=1;i<k;i++) if(max<b[i]) max=b[i];
		printf("\nSo chinh phuong lon nhat la:%d\n",max);
	}
	}
	else
	 printf("\nBan phai tao mang truoc khi chon chuc nang khac");
}
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void hoanvi(int a[][100],int n,int m)
{
	if (safe==1)
	{
	clrscr();
	for(int i=0;i<m;i++)
		swap(&a[0][i],&a[1][i]);
	printf("\nMa Tran sau khi thay doi:\n");
	xuatmang(a,n,m);
	}
	else
	 printf("\nBan phai tao mang truoc khi chon chuc nang khac");
}

void sapxep(int a[][100],int n,int m)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n-1;j++)
			if (a[j][i]>a[j+1][i])
				swap(&a[j][i],&a[j+1][i]);
                                printf("mangdasapxep:%4d",sapxep);

}
void dichmang(int a[][100],int n,int m)
{
	if (safe==1)
	{
	clrscr();
	printf("\nMa tran ban dau:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}

	printf("\nMa tran dich xuong:\n");
	for(i=n-1;i>=0;i--)
	{
		for(int j=0;j<m;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	printf("\nMa tran xoay vong:\n");
	for(i=m-1;i>=0;i--)
	 {
		for(int j=0;j<n;j++)
			printf("%4d",a[j][i]);
		printf("\n");
	 }
	}
	else
	 printf("\nBan phai tao mang truoc khi chon chuc nang khac");
}
int ktsnt(int a)
{
	int c,dem=0;
	c=sqrt(a);
	for(int i=2;i<=c;i++)
		if (a%i==0) dem++;
	if (dem==0) 
	return 1;
	return 0;
}
void songuyento(int a[][100],int n,int m)
{

	if (safe==1)
	{
	clrscr();
	printf("Ma tran A:\n");
	xuatmang2(a,n,m);
	printf("\n");
	int count,count2=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			if(i==0||(j==0)||(j==m-1)||(i==n-1))
			{
				count=ktsnt(a[i][j]);
				if (count==1)
				{
					printf("%4d",a[i][j]);
					count2++;
				}
			}
		}
	if (count2!=0) 
	 printf("   la %d so nguyen to tren bien cua mang.\n",count2);
	else
	 printf("\n Bien cua mang khong co so nguyen to nao.\n");
	}
	else 
	  printf("\nBan phai tao mang truoc khi chon chuc nang khac");
}
void matran90(int a[][100],int n,int m)
{
	int b[100][100]={0};
	if (safe==1)
	{
	clrscr();
	printf("\n Mang A:\n");
	xuatmang2(a,n,m);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			b[j][n-i-1]=a[i][j];
	printf("\n ma tran quay 90 do tu ma tran a la:\n");
	xuatmang2(b,m,n);
	}
	else
	 printf("\nBan phai tao mang truoc khi chon chuc nang khac");
}
void tongduongcheo(int a[][100],int n,int m)
{
	if (safe==1)
	{
	clrscr();
	int k,tong=0;
	if (n!=m)
	 k=min(n,m);
	else 
	 k=n;
	for(int i=0;i<k;i++)
		tong+=a[i][i];
	printf("\n tong duong cheo chinh thu nhat:%d\n",tong);
	tong=0;
	for(i=0;i<k;i++)
		tong+=a[i][k-i-1];
	printf("\n tong duong cheo chinh thu hai:%d\n",tong);
	}
	else 
	printf("\nBan phai tao mang truoc khi chon chuc nang khac");
}
void main()
{
	clrscr();
	int a[100][100],n,m,x;
	do
	{
		printf("\n");
		printf("\n1 .taomang  ma tran");
		printf("\n2 .xuatmang ma tran ");
		printf("\n3 .tong duong cheo chinh cua ma tran");
		printf("\n4 .dem so luong cac so nguyen to");
		printf("\n5 .kiem tra ma tran co so hoan thien ");
		printf("\n6 .tim so chinh phuong lon nhat");
		printf("\n7 .hoan vi 2 dong d1 va d2");
		printf("\n8 .dich xuong quay vong");
		printf("\n9 .sap xep tang dan tu tren xuong duoi o tung cot");
		printf("\n10.tao ma tran xoay 90 do cua ma tran dau");
		printf("\n11 .Thoat");
		printf("\nBan chon chuc nang:");
		scanf("%d",&x);
		switch(x)
		{
			case 1 : 
			nhapmang(a,&n,&m); 
			safe=1;
			break;
			case 2 :
			xuatmang(a,n,m);
			break;
			case 3 :
			tongduongcheo(a,n,m);
			break;
			case 4 :
			songuyento(a,n,m);
			break;
			case 5 :
			sohoanthien(a,n,m);
			break;
			case 6 :
			chinhphuong(a,n,m);
			break;
			case 7 :
			hoanvi(a,n,m);
			break;
			case 8 :
			dichmang(a,n,m);
			break;
			case 9 :
			sapxep(a,n,m);
			break;
			case 10:
 			matran90(a,n,m);
			break;
			case 11 :
			printf("nhan enter de thoat!!!");
			break;
			default:
			printf("nhap sai!!!\t nhan enter de nhap lai.");
		}
	}while(x!=11);
	getch();
}

