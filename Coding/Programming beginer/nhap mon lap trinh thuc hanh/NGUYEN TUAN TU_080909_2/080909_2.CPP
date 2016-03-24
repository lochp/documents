#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
		void nhapmang(int a[],int n)
		{  randomize();
		for(int i=0;i<n;i++)
		 a[i]=random(201)-100;
		}
		void xuatmang(int a[],int n)
		{
		for(int i=0;i<n;i++)
		printf("%5d",a[i]);
		  printf("\n");
		}


		void tong(int a[],int n)
		{
		int tong=0;
		for(int i=0;i<n;i++)
			{
			 if(a[i]%3==0 && a[i]>=0)
			 {
			 tong+=a[i];
			 }
			}
	       printf("tong cac so chia het cho 3: %d",tong);
		}
		void dem (int a[],int n)
		{
		  int dem=0;
		   printf("\nla ");
		  for(int i=0;i<n;i++)

		  {
			if (a[i]<=20 &&a[i]>=-20)
			{
				dem+=1;
				printf ("  %d",a[i]);
			}
		  }
		  printf(" \nco %d phan tu nam trong doan [-20,20]",dem);
	       }

	       void thaythe( int a[], int n)

	       {
	       int c, t      ;
	       printf ("\n\n\nNhap so muon thay the: ");
	       scanf("%i",&c);
	       printf ("\nNhap gia tri can thay the: ");
	       scanf ("%i", &t);
	       for (int i=0; i<n; i++)
		  {
		   if (a[i]!= c)
		       printf (" %i",a[i]);
		   else
		   {
		    a[i]=t;
		    printf (" %i",a[i]);
		   }
		  }
	       }

	       void sapxep( int a[], int n)
	       {
		 int b[100], c[100], d1=0, d2=0, d3=0;
		 printf ("\nMang sau khi sap xep: ");
		 for ( int i=0; i<n; i++)
		 {
		   if (a[i]%2==0)
		   {
		      b[d1]=a[i];
		      d1+=1;
		   }
		   else
		   {
		   c[d2]=a[i];
		   d2+=1;
		   }

		 }
		 for (int j=0; j<d1; j++)
		 {
		 a[j]=b[j];
		 printf (" %i",a[j]);
		 }
		 for (int y=d1; y<n; y++)
		 {
		 a[y]=c[d3];
		 d3++;
		 printf(" %i", a[y]);

		 }
	       }

		void main()
		 {
		  clrscr();
		  int a[20],n;
		  printf("nhap dong n:");
		  scanf("%d",&n);
		  int x=0;
		  do
		   {
		   printf("1.nhapmang:");
		   printf("\n1.xuatmang:");
		   printf("\n2.tong:");
		   printf("\n3.dem:");
		   printf("\n4.thaythe:");
		   printf("\n5.sapxep:");
		   printf("\n6.thoat");
		   printf("\nbam so de thuc hien:");
		   fflush(stdin);
		   scanf("%d",&x);
		     switch(x)
		     {
		     case 1:
		      nhapmang(a,n);
		      xuatmang(a,n);
		     break;
		     case 2:
		      tong(a,n);
		     break;
		     case 3:
		      dem(a,n);
		     break;
		     case 4:
		      thaythe(a,n);
		     break;
		     case 5:
		      sapxep(a,n);
		     break;
		     case 6:
		      printf("nhan enter de thoat!!!");
		     break;
		     default:
		      printf("nhap sai!!!\t nhan enter de nhap lai.");

		     }
		    getch();
		   }
		  while(x!=6);
		 }