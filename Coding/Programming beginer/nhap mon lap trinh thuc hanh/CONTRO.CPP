#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int *inputArray(int &n)
{
	printf("Cho biet so phan tu cua mang: ");
	scanf("%d", &n);
	int *a=(int *) malloc(sizeof(int)*n);
	if(a!=NULL)
		for(int i=0; i<n; i++)
			scanf("%d", a+i);
	return a;
}
int *makeArray(int &n)
{
	printf("Cho biet so phan tu cua mang: ");
	scanf("%d", &n);
	int *a=(int *) malloc(sizeof(int)*n);
	randomize();
	if(a!=NULL)
		for(int i=0; i<n; i++)
			*(a+i)=random(101)-50;
	return a;
}
void outputArray(int *a, int n)
{
	printf("\n");
	for(int i=0; i<n; i++)
		printf("%d ", *(a+i));
}
void sortAscending(int *a, int n)
{
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(*(a+i)>*(a+j))
			{
				int t=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=t;
			}
}
void sortDescending(int *a, int n)
{
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(*(a+i)<*(a+j))
			{
				int t=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=t;
			}
}
void addElement(int *a, int &n, int x, int k)
{
	if(k>=0 && k<=n)
	{
		for(int i=n; i>k; i--)
			*(a+i)=*(a+i-1);
		*(a+k)=x;
		n++;
	}
}
int findElement(int *a, int n, int x)
{
	for(int i=0; i<n; i++)
		if(*(a+i)==x)
			return i;
	return -1;
}
int deleteElement(int *a, int &n, int x)
{
	int k=findElement(a,n,x);
	if(k>=0)
	{
		for(int i=k; i<n-1; i++)
			*(a+i)=*(a+i+1);
		n--;
		return k;
	}
	return -1;
}


void main()
{
	clrscr();
	int *A, N;

	//A=inputArray(N);
	A=makeArray(N);
	printf("\nNoi dung cua mang: ");
	outputArray(A,N);

	/*sortAscending(A,N);
	outputArray(A,N);
	sortDescending(A,N);
	outputArray(A,N);*/

	int x=random(101)-50;
	int vt=3;
	addElement(A,N,x,vt);
	printf("\nNoi dung cua mang sau khi chen them %d vao vi tri %d: ",x,vt);
	outputArray(A,N);

	int y=random(101)-50;
	int k=deleteElement(A,N,y);
	if(k>=0)
	{
		printf("\nNoi dung cua mang sau khi xoa %d tai vi tri %d: ",y,k);
		outputArray(A,N);
	}
	else
		printf("\nMang khong co phan tu %d",y);

	free(A);

	getch();
}