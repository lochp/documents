#include<conio.h>
#include<iostream>
#include<stdio.h>
#include"SVKHAC.cpp"
using std::cout;
using std::cin;

class qlsv
{
	private:
		int ss;
		Sinhvien *ds;
	public:
		qlsv(int);
	   void	nhapds();
	   void	xuatds();
	   void	print();
	   void	sapxep();
};
qlsv::qlsv(int y):ss(y)
{
	ds = new Sinhvien[y];
}
void qlsv::nhapds()
{
	int i;
	for(i=0;i<ss-1;i++)
	{
	      ds[i].Nhap();
	      ds[i].TinhdiemTB();
              ds[i].Xeploai();
	}
       //	ss=n;
}
void qlsv::sapxep()
{
     Sinhvien t;
     int i, j;

     for(i=0; i<ss-1; i++)
     {
	  	for (j=ss-1; j>i; j--)
			 {
			  if(ds[j].getdiemTB() > ds[j-1].getdiemTB())
			  {
			  Sinhvien t = ds[j];
			  ds[j] = ds[j-1];
			  ds[j-1] = t;
			  }
		    }
     }
     cout<<"\nSap xep giam dan theo diem TB.";
     for(i=0;i<ss-1;i++)
				cout<<"\n"<<ds[i].getdiemTB();
}
void qlsv::xuatds()
{
	int i;
	for(i=0;i<ss-1;i++)
	 ds[i].Xuat();
}
main()
{
   int n;
	qlsv q(3);
	//clrscr();
	q.nhapds();
	q.xuatds();
	q.sapxep();
	getch();
}




