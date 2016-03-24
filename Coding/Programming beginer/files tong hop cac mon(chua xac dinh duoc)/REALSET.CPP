#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<mem.h>
using std::cout;
using std::cin;

class realset
{   
   private:
			  float *data;
			  int n, size;
	public:
			 realset (int s);
			 void add (float x);
			 void remove (float x);
   	    void Union (realset,realset);
			 void interset (realset,realset);
			 void copy (realset &s);
			 int isempty();
			 int isfull();
			 int ismember(float x);
			 void print();
			 void input();
};
realset::realset(int s)
{	
	size=s;
	n=0;
	data = new float[size];
}
int realset::isempty()
{	
	if (n==0)
		return 1;
	return 0;
}
int realset::isfull()
{	
	if (n==size)
		return 1;
	return 0;
}
int realset::ismember(float x)
{  
	for (int i=0;i<n;i++)
		if (data[i]==x)
			return 1;
		return 0;    
}
void realset::input()
{	
	cout<<"nhap so n: ";	cin>>n;
	for (int i=0;i<n;i++)
	{	
		cout<<"data["<<i<<"]: ";
		cin>>data[i];
	}
}
void realset::print()
{	
	for (int i=0;i<n;i++)
		cout<<"  "<<data[i];
}
void realset::add(float x)
{  
	if (!isfull() && !ismember(x))
		data[n++]=x;
}
void realset::remove(float x)
{   
	 int i;
	 if (!isempty())
	 {	
		for(i=0;i<n;i++)
			if(data[i]==x)
				break;
		for(int j=i;j<n-1;j++)
			data[j]=data[j+1];
		n--; 
    }	
}
void realset::copy(realset &s)
{	
	s.size=size;
	s.n=n;
	delete s.data;             //realloc(...,...);
	s.data = new float[size];
	memcpy (s.data,data,sizeof(float)*size);
}
main()
{	
	int size=5;
	realset rs(size);
	int x;
	realset s(0);
	rs.input();
	cout<<"nhap x: "; cin>>x;
	//rs.add(x);
	if(x!=rs.remove(x))
	       cout<<"Ko co trong mang: ";
	else       
          rs.remove(x);
	rs.copy(s);
	s.print();
//	rs.print();
	getch();
}
