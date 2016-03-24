#include <iostream.h>
#include <iomanip.h>
void main()
{
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
	cout<<"\nDAY :\n";
	for (x=0; x<n; x++)
		cout<<setw(4)<<a[x];

}