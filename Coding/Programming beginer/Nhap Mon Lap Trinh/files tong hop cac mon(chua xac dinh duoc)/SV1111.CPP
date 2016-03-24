#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
#include <mem.h>

typedef struct 
{
			char MSSV[5], hoten[30];
			int diem;
} SV;
typedef SV elem;

#include "insertionsort.cpp"
int ssMSSV(SV x, SV y)
{
	return strcmp(x.MSSV, y.MSSV);
}
int ssdiem(SV x, SV y)
{
	return y.diem-x.diem;
}
void nhapSV(SV a[], int &n)
{
	int i;
	char x[5];
	do {
		printf("\nMa so SV: ");
		int flushall();
		gets(x);
		if (x[0])
		{
			strcpy(a[n].MSSV, x);
			printf("\nHoten SV: ");
			gets(a[n].hoten);
			printf("\ndiem  SV: ");
			scanf("%d",&a[n].diem);
			n++;
		}
	} while (x[0]);
}
void inSV(SV a[], int n)
{
	int i;
	for (i=0; i<n; i++)
		printf("\n%6s %30s %4d", a[i].MSSV, a[i].hoten, a[i].diem);
}
main()
{
	SV a[100];
	int n=0;
	nhapSV(a, n);
	printf("\nDanh sach ban dau: \n");
	inSV(a, n);
	insertionsort(a, n, ssMSSV);
	printf("\nDay sap xep theo Ma so: \n");
	inSV(a, n);
	insertionsort(a, n, ssdiem);
	printf("\nDay sap xep theo diem giam dan: \n");
	inSV(a, n);
	getch();
}

