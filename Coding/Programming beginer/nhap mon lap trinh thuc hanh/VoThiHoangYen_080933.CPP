  /* Vo Thi Hoang Yen
    080933
    L4-TH1
    De 1*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<dos.h>
int f=0;
void nhap(int a[][100], int m, int n)
{
	randomize();
	for(int i=0; i<m; i++)
	     for(int j=0; j<n; j++)
		   a[i][j]=rand();   
}                                                  
void xuat(int a[][100], int &m, int &n)
{
	if(f==0)
	printf(" Ban chua tao ma tran");
	else
	for(int i=0; i<m; i++)
	   { for(int j=0; j<n; j++)
		printf(" %5d",  a[i][j]);
	     printf("\n");
	   }
}
void hoanvi(int *t, int *h)
{       int hv=*t;
	*t=*h;
	*h=hv;
}
long cau3(int a[][100] , int m, int n)
{
	long tong= 0;
	if(f==0)
	     printf(" Ban chua tao ma tran");
	else
	   { if(n==m)
	     for(int i=0; i<n; i++)
		   tong+= a[i][i];
	     else
		{ int k=(n<m)? n:m;
		  for(int i=0; i<k; i++)
		  tong+=a[i][i];
		}
	     printf("tong gia tri duong cheo chinh %ld\n", tong);
	   }
	return tong;
}
int cau4(int a[][100], int m, int n)
{
	int dem=0;
	if(f==0)
	     printf(" Ban chua tao ma tran");
	else
	   { for(int i=0; i<m; i++)
		 for(int j=0; j<n; j++)
		      if((i==0||j==0||i==m-1||j==n-1)&&a[i][j]>0)
			  { int k=0;
			    int s= sqrt(a[i][j]);
			    for(int w=2; w<=s; w++)
			    if(a[i][j]%w==0)
				  k=1;
			    if(k==0)
				{ dem+=1;
				  printf("%5d", a[i][j]);
				}
			  }
	     if(dem!=0)
		  printf("   la %d so nguyen to tren bien ", dem);
	     else
	     printf("  khong co so nguyen to tren bien cua ma tran");
	   }
	return dem;
}
void cau5(int a[][100], int m, int n)
{
	int dem=0;
	if(f==0)
	     printf(" Ban chua tao ma tran");
	else
	   {  for(int i=0; i<m; i++)
		    for(int j=0; j<n; j++)
		       {  int k=1;
			  for(int f=2; f<=a[i][j]/2; f++)
				if(a[i][j]%f==0)
				     k+= f;
				if(k==a[i][j])
				  {  dem+=1;
				     printf("%5d", a[i][j]);
				  }

		      }
	      if(dem==0)
		   printf("ma tran khong ton tai so hoan thien");
	      else
		   printf("   la cac so hoan thien trong ma tran");
	   }
}
int cau6(int a[][100], int m, int n)
{
	int max=0;
	if(f==0)
	     printf(" Ban chua tao ma tran");
	else
	   { for(int i=0; i<m; i++)
		  for(int j=0; j<n; j++)
		       {  int h=2;
			  while(h*h<a[i][j]) h++;
			      if(h*h==a[i][j]&&max<a[i][j])
				 max=a[i][j];
		       }
	     if(max==0)
		   printf(" ma tran khong co so chinh phuong");
	     else
		   printf("so chinh phuong lon nhat %d", max);
	   }
	return max;
}
void cau7(int a[][100],int n)
{
	if(f==0)
	     printf(" Ban chua tao ma tran");
	else
	   { for(int i=0; i<n; i++)
		  hoanvi(&a[0][i], &a[1][i]);
	   }
}
void cau8(int a[][100], int m, int n)
{
	if(f==0)
	printf(" Ban chua tao ma tran");
	else
	  { int dd=0;
	    int *d=(int *) malloc(sizeof(int)*n);
	    for(int i=m-1; i>=0; i--)
		  for(int j=0; j<n; j++)
			if(i==m-1)
			     *(d+(dd++))=a[n-1][j];
			else
			     a[i+1][j]=a[i][j];
	   for(int q=0; q<n; q++)
		  a[0][q]=*(d+q);
	 }
}
void cau9(int a[][100], int m, int n)
{
	if(f==0)
	     printf(" Ban chua tao ma tran");
	else
	  {  for(int j=0; j<n; j++)
		  for( int i=0; i<m-1; i++)
		       for(int f=i+1; f<m; f++)
			    if(a[i][j]>=a[f][j])
				  hoanvi( &a[i][j], &a[f][j]);
	  }
}
void cau10(int a[][100], int m, int n)
{
        int d[100][100];
	if(f==0)
	     printf(" Ban chua tao ma tran");
	else
	  {  for(int i=0; i<m; i++)
		  for(int j=0; j<n; j++)
		       d[n-j-1][i]= a[i][j];
	     for(int b=0; b<n; b++)
		{  for(int c=0; c<m; c++)
			printf("%6d", d[b][c]);
		   printf("\n");
		}
	  }
}
void main()
{
	clrscr();
	int a[100][100], n, m, choice ;
	do
	{ if(wherey()>45||wherey()<2)
	     { if(wherey()>40)
		     sleep(1);
	       clrscr();
	       textcolor(9+128);
	       cprintf("                                 -MENU-\n\r" );
	       textcolor(15);
	       cprintf(" 1. Tao gia tri ngau nhien cho ma tran MxN\n\r"
		" 2. Xuat ma tran MxN\n\r"
		" 3. Tinh tong phan tu tren duong cheo chinh\n\r"
		" 4. Dem so nguyen to tren bien ma tran\n\r"
		" 5. Kiem tra ma tran co so hoan thien hay khong\n\r"
		" 6. Tim so chinh phuong lon nhat\n\r"
		" 7. Hoan vi dong d1 va d2 cua ma tran\n\r"
		" 8. Dich xuong xoay vong cua ma tran\n\r"
		" 9. Sap xep gia tri tang dan tren tung cot\n\r"
		"10. Tao ma tran B xoay 90 do nguoc chieu kim dong ho\n\r"
		"11. Thoat\n"  );
	      }
	   textcolor(3);
	   cprintf(   "\n\n\rDe chon chuc nang nhan phim 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 hoac 11: ");
	   textcolor(7);
	   fflush(stdin);
	   scanf("%d",&choice);
	   switch(choice)
	     { case 1:
		   do
		     {  printf(" Nhap so dong (so dong <100)=");
			scanf("%d", &m);
			printf(" Nhap so cot (so cot<100)=");
			scanf("%d", &n);
		     }
		   while(m>100||m<=0||n>100||n<=0);
		   f=1;
		   nhap(a, m, n);
		   break;
	       case 2:
		   printf(" Ma tran MxN\n");
		   xuat(a, m,n);
		   break;
	       case 3:
		   cau3(a, m, n);
		   break;
	       case 4:
		   cau4(a, m, n);
		   break;
	       case 5:
		   cau5(a, m, n);
		   break;
	       case 6:
		   cau6(a, m, n);
		   break;
	       case 7:
		   cau7(a, n);
		   printf(" Ma tran da duoc hoan vi\n Ban co the nhan phim so 2 de xem ma tran sau khi hoan vi ");
		   break;
	       case 8:
		   cau8(a, m, n);
		   printf(" Ma tran da dich xuong xoay vong cac dong \n Ban co the nhan phim so 2 de xem ma tran sau khi dich xuong xoay vong");
		   break;
	       case 9:
		   printf(" Ma tran da duoc sap xep\n Ban co the nhan phim so 2 de xem ma tran sau khi sap xep");
		   cau9(a, m,n);
		   break;
	       case 10:
		   printf(" Ma tran B\n");
		   cau10(a, m,n);
		   break;
	       case 11:
		   printf(" Nhan bat ki phim nao");
		   break;
	       default:
		   printf("Ban phai chon 1, 2, 3, 4, 6, 7, 8, 9, 10 hoac 11: ");
	     }
	} while (choice!=11);
	getch();
}