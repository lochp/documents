#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
typedef int elem;
void bubblesort(elem a[], int n, int (*comp)(elem, elem))
{
	int i, j;
	elem x;
	for(i=1;i<n;i++)
		for(j=n-1; j>=i; j--)
			if(comp(a[j],a[j-1])<0)
			{
				x=a[j];
				a[j]=a[j-1];
				a[j-1]=x;
				}
}

int sst(int x, int y)
{
	return x-y;
}
int ssg(int x, int y)
{
	return y-x;
}

void main()
{
	int d,g;
	int a[100], i, j, x, n=0;
	cout<<"\nNhap day:";
	do {
		cin>>x;
		if (x>0) a[n++]=x;
	} while (x>0);

	cout<<"DAY BAN DAU:\n";
	for (i=0; i<n; i++)
		cout<<setw(4)<<a[i];
	i=0;
	j=n-1;
	do {
		while (a[i]%2) i++;
		while (a[j]%2==0) j--;
		if (i<j)
		{
			x = a[i];
			a[i] = a[j];
			a[j] = x;
			i++;
			j--;
		}
	} while (i<j);
	cout<<"\nDAY CHAN LE:\n";
	for (x=0; x<n; x++)
		cout<<setw(4)<<a[x];
	bubblesort(a, j+1, sst);
	bubblesort(a+i, n-i, ssg);

	cout<<"\nDAY SX:\n";
	for (x=0; x<n; x++)
		cout<<setw(8)<<a[x];

getch();
}