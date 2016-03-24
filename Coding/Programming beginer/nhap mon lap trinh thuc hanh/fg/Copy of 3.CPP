#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void nhap(int a[][100], int n, int m)
{       randomize();
	for(int i=0; i<n; i++)
	   for( int j=0; j<m; j++)
	      a[i][j]=random(12);              /* sua lai rand()*/

}
void xuat(int a[][100], int n, int m)
{
	for(int i=0; i<n; i++)
	   { for(int j=0; j<m; j++)
		printf(" %5d", a[i][j]);
	     printf("\n");
	   }
}                    /*
long cau3(int a[][100] , int n, int m)
{
	long tong= 0;
	if(n==m)
	  for(int i=0; i<n; i++)
	     for(int j=0; j<n; j++)
		 { if(j==n-i-1)
		      tong+= a[i][j];
		 }

	else
	{ int k=(n<m)? n:m;
	  for( int i=0; i<k; i++)
	     for( int j=0; j<k; j++)
		 if(j==k-1-i)
		     tong+=a[i][j];
	      }
	printf(" tong gia tri duong cheo phu %ld", tong);
	return tong;
}

int cau4(int a[][100], int n, int m)
{
	int dem=0;
	for( int i=0; i<n; i++)
	   for( int j=0; j<m; j++)
	      if(i==0||j==0||i==m-1||j==m-1)
		 {
		    int k=0, s= sqrt(a[i][j]);
		    for(int w=2; w<=s; w++)
		       if(a[i][j]%w==0)
			  k=1;
		   if(k==0)
		      dem+=1;
		}
	printf(" so luong cac so nguyen to tren bien %d", dem);

	return dem;
}                          */     /*
int cau5( int a[][100], int n, int m)
{
	int dem=0;
	for( int i=0; i<n; i++)
	    for( int j=0; j<m; j++)
                      {  int k= 1;
	           for( int f = 2; f <= a[i][j] / 2; f++)
                             if (a[i][j] % f== 0) 
	                   k += f;
	           if (k == a[i][j]) 
			 dem+=1;

	        }
	if(dem==0)
	   printf(" ma tran khong ton tai so hoan thien");
	else
	   printf(" ma tran co ton tai so hoan thien trong ma tran");
}      */
			   /*
int cau6(int a[][100], int n, int m)
{
	int max=0;
	for( int i=0; i<n; i++)
	    for( int j=0; j<m; j++)
	    {  int h=2;
	       while(h*h<a[i][j]) h++;
	       if(h*h==a[i][j]&&max<a[i][j])
		  max=a[i][j];
	    }
	printf("so chinh phuong lon nhat %d", max);
	return max;
}




int cau7( int a[][100], int n, int m)
{
	int c1, c2, hv;
	printf("nhap cot can hoan vi");
	scanf("%d", &c1);
	printf(" cot %d hoan vi voi cot?", c1);
	scanf("%d",&c2);
	for( int i=0; i<n; i++)
	   {  hv=a[i][c1-1];
	      a[i][c1-1]=a[i][c2-1];
	      a[i][c2-1]=hv;
	   }
       return a[n][m];
}	  */                 /*
int cau8(int a[][100], int n, int m)
{
	int d[100], dd=0;
	for( int i=n-1; i>=0; i--)
	   for( int j=0; j<m; j++)
	      if(i==n-1)
		  d[dd++]=a[n-1][j];
	      else
		  a[i+1][j]=a[i][j];                      //tim cach ghi ham hoan vi ra rieng
	for(int q=0; q<m; q++)
	      a[0][q]=d[q];
	return a[n][m];
}
void cau9(int a[][100], int n, int m)
{
   int hv;
	for(int j=0; j<m; j++)
	for( int k=0; k<n; k++)
	   for(int i=0; i<n-1; i++)
							   // truyen gia tri
		   if( a[i][j]>=a[i+1][j])
		    {  hv=a[i][j];
		       a[i][j]=a[i+1][j];
		       a[i+1][j]=hv;
		    }                      
}         */
int cau10(int a[][100], int n, int m)
{
	 printf(" cau 10\n");
	 int d[100][100];
	 for( int i=0; i<n; i++)
	    { for( int j=0, g=m-1; j<m&& g>=0; j++, g--)
		{ d[g][i]=a[i][j];

	for(int p=0; p<m; p++)
	   { for(int o=0; o<n; o++)
		printf(" %5d", d[p][o]);
	     printf("\n");
	   }
		  


    /*	int c[10000], cc=0;
	for( int i=0,g=m; i<n&&g>0; i++, g--)
	     for( int j=0; j<m; j++)
		c[cc++]=a[i][j];
	int x=0, b[][];
	for(int j=m-1; j>=0; j--)
	   for(int i=0; i<n;i++)
	      b[i][j]=c[x++];
	xuat(b, i, j);




      return c[cc];
			  */
                          return d[m][n];

}

void main()
{
	int a [100][100], n, m, dem, max ;
	printf(" nhap n");
	scanf("%d", &n);
	printf(" nhap m");
	scanf("%d", &m);
	nhap(a, n, m);
	xuat(a, n, m); 
    /*	cau3(a, n, m);
	cau4(a, n, m);  */
     /*	cau5(a, n, m); /*
	cau6(a, n, m);
	cau7(a, n, m);*/

    /*	cau8(a, n, m);     */




  /*	cau9(a, n, m);           */
        cau10(a, n, m);

	getch();

}