#include "stdio.h"
#include "conio.h"
#include "math.h"
#include "stdlib.h"
int safe=0;
void taomang(int a[][100],int *dong,int *cot)
{
	clrscr();
	randomize();
	do
	{
	printf("\nNhap so dong <=100 va >0:");
	scanf("%d",dong);
	printf("\nNhap so cot <=100 va >0:");
	scanf("%d",cot);
	}while(*dong>100||*cot>100||*dong<0||*cot<0);
	for(int i=0;i<*dong;i++)
		for(int j=0;j<*cot;j++)
			a[i][j]=random(210);
}
void xuat(int a[][100],int dong,int cot)
{
	if (safe==1)
	{
	clrscr();
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	}else printf("\nBan phai tao mang truoc khi chon chuc nang khac");
}
void xuat2(int a[][100],int dong,int cot)
{
	if (safe==1)
	{
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	}else printf("\nBan phai tao mang truoc khi chon chuc nang khac");
}

int min(int a,int b)
{
	if (a>b) return b;
	else	 return a;
}
void perfectnum(int a[][100],int dong,int cot)
{
	int dem=0;
	if (safe==1)
	{
	clrscr();
	int k,b[100]={0},j=0,tong;
	for( k=0;k<dong;k++)
		for(int l=0;l<cot;l++)
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
	if (dem==0) printf("\nMang khong co so hoan thien\n");
	}else printf("\nBan phai tao mang truoc khi chon chuc nang khac");
}
void chinhphuong(int a[][100],int dong,int cot)
{
	if (safe==1)
	{
	clrscr();
	int max,b[100]={0},k=0;
		double c;
	for(int i=0;i<dong;i++)
		for(int j=0;j<cot;j++)
		{

			if(a[i][j]>0)
			{
				c=sqrt(a[i][j]);
				if(c-abs(c)==0) b[k++]=a[i][j];
			}
		}
	max=b[0];
	if(k==0) printf("\nMang khong co so chinh phuong.\n");
	else
	{
		for(i=1;i<k;i++) if(max<b[i]) max=b[i];
		printf("\nSo chinh phuong lon nhat la:%d\n",max);
	}
	}else printf("\nBan phai tao mang truoc khi chon chuc nang khac");
}
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void hoanvid1d2(int a[][100],int dong,int cot)
{
	if (safe==1)
	{
	clrscr();
	for(int i=0;i<cot;i++)
		swap(&a[0][i],&a[1][i]);
	printf("\nMa Tran sau khi thay doi:\n");
	xuat(a,dong,cot);
	}else printf("\nBan phai tao mang truoc khi chon chuc nang khac");
}

void sort(int a[][100],int dong,int cot)
{
	for(int i=0;i<cot;i++)
		for(int j=0;j<dong-1;j++)
			if (a[j][i]>a[j+1][i])
				swap(&a[j][i],&a[j+1][i]);

}
void  rotate(int a[][100],int dong,int cot)
{
	if (safe==1)
	{
	clrscr();
	printf("\nMa tran ban dau:\n");
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}

	printf("\nMa tran dich xuong:\n");
	for(i=dong-1;i>=0;i--)
	{
		for(int j=0;j<cot;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	printf("\nMa tran xoay vong:\n");
	for(i=cot-1;i>=0;i--)
	{
		for(int j=0;j<dong;j++)
			printf("%4d",a[j][i]);
		printf("\n");
	}
	}else printf("\nBan phai tao mang truoc khi chon chuc nang khac");
}
int ktsnt(int a)
{
	int c,dem=0;
	c=sqrt(a);
	for(int i=2;i<=c;i++)
		if (a%i==0) dem++;
	if (dem==0) return 1;
	return 0;
}
void songuyento(int a[][100],int dong,int cot)
{

	if (safe==1)
	{
	clrscr();
	printf("Ma tran A:\n");
	xuat2(a,dong,cot);
	printf("\n");
	int count,count2=0;
	for(int i=0;i<dong;i++)
		for(int j=0;j<cot;j++)
		{
			if(i==0||(j==0)||(j==cot-1)||(i==dong-1))
			{
				count=ktsnt(a[i][j]);
				if (count==1)
				{
					printf("%4d",a[i][j]);
					count2++;
				}
			}
		}
	if (count2!=0) printf("   la %d so nguyen to tren bien cua mang.\n",count2);
	else("\n Bien cua mang khong co so nguyen to nao.\n");
	}else printf("\nBan phai tao mang truoc khi chon chuc nang khac");
}
void matran90(int a[][100],int dong,int cot)
{
	int b[100][100]={0};
	if (safe==1)
	{
	clrscr();
	printf("\n Mang A:\n");
	xuat2(a,dong,cot);
	for(int i=0;i<dong;i++)
		for(int j=0;j<cot;j++)
			b[j][dong-i-1]=a[i][j];
	printf("\n ma tran quay 90 do tu ma tran a la:\n");
	xuat2(b,cot,dong);
	}else printf("\nBan phai tao mang truoc khi chon chuc nang khac");
}
void sum(int a[][100],int dong,int cot)
{
	if (safe==1)
	{
	clrscr();
	int k,tong=0;
	if (dong!=cot) k=min(dong,cot);
	else k=dong;
	for(int i=0;i<k;i++)
		tong+=a[i][i];
	printf("\n tong duong cheo chinh thu nhat:%d\n",tong);
	tong=0;
	for(i=0;i<k;i++)
		tong+=a[i][k-i-1];
	printf("\n tong duong cheo chinh thu hai:%d\n",tong);
	}else printf("\nBan phai tao mang truoc khi chon chuc nang khac");
}
int main()
{
	clrscr();
	int a[100][100],dong,cot,code;
	do
	{
		printf("\n");
		printf("\n1 .Tao ngau nhien  ma tran");
		printf("\n2 .xuat ma tran mxn");
		printf("\n3 .Tinh tong duong cheo chinh cua ma tran");
		printf("\n4 .Dem so luong cac so nguyen to");
		printf("\n5 .Kiem tra ma tran co so hoan thien 0");
		printf("\n6 .tim so chinh phuong lon nhat");
		printf("\n7 .Hoan vi 2 dong d1 va d2");
		printf("\n8 .Dich xuong quay vong");
		printf("\n9 .Sap xep tang dan tu tren xuong duoi o tung cot");
		printf("\n10.tao ma tran xoay 90 do cua ma tran a");
		printf("\n0 .Thoat");
		printf("\nBan chon chuc nang:");
		scanf("%d",&code);
		switch(code)
		{
			case 1 : taomang(a,&dong,&cot); safe=1;	break;
			case 2 : xuat(a,dong,cot);		break;
			case 3 : sum(a,dong,cot);		break;
			case 4 : songuyento(a,dong,cot);	break;
			case 5 : perfectnum(a,dong,cot);	break;
			case 6 : chinhphuong(a,dong,cot);	break;
			case 7 : hoanvid1d2(a,dong,cot);	break;
			case 8 : rotate(a,dong,cot);		break;
			case 9 : sort(a,dong,cot);		break;
			case 10: matran90(a,dong,cot);		break;

			case 0 : return 0;
			default: printf("\nban phai nhap cac so trong khoang tu 1 den 6.");
		}
	}while(code!=0);
	return 0;
}

