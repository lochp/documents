#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
/*int *inputArray(int &n)
{
	printf("cho biet so phan tu cua mang:");
	scanf("%d",&n);
	int *a=(int *)malloc(sizeof(int)*n);
   if(a!=NULL)
	for(int i=0;i<n;i++)
	scanf("%d",a+i);
     return a;
} */
int *makeArray(int &n)
{
	printf("cho biet so phan tu cua mang:");
	scanf("%d",&n);
	int *a=(int *)malloc(sizeof(int)*n);
	randomize();
   if(a!=NULL)
	for(int i=0;i<n;i++)
	  *(a+i)=random(101)-50;
      return a;
}
void outputArray(int *a,int n)
{
	printf("\nnoi dung cua mang:");
       for(int i=0;i<n;i++)
	printf("%4d",*(a+i));

}
void *sapxep(int *a,int n)
{
	for(int i=0;i<n-1;i++)
	 for(int j=i+1;j<n;j++)
	  if(*(a+i)>*(a+j))
	 {
	  int t=*(a+i);
	  *(a+i)=*(a+j);
	  *(a+j)=t;
	 }

}

void main()
{
	clrscr();
	int *A,N;
	//A=inputArray(N);
	A=makeArray(N);
	outputArray(A,N);
	sapxep(A,N);
	outputArray(A,N);

	free(A);
	getch();
}