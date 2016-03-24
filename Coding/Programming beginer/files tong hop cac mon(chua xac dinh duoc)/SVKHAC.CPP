#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<iostream>

using std::cout;
using std::cin;

class Sinhvien
{
	public:
	char ms[10];
	char ten[30],loai[15];
	float diem1,diem2,diem3,diemTB;
	void Nhap();
	void Xuat();
	float TinhdiemTB();
	void Xeploai();
	void setMS(char *s);
	void setten(char *t);
	float setdiem1(float diem1);
	float setdiem2(float diem2);
	float setdiem3(float diem3);
	char *getMS();
	float getdiemTB();
	char *getXeploai();

};
void Sinhvien::Nhap()
{
	cout<<"\nNhap ma so SV: ";
	cin.getline(ms,10,'.');
	cout<<"\nNhap ten SV: ";
	cin.getline(ten,30,'.');
	printf("\nNhap diem 1, diem 2, diem 3: ");
	cin>>diem1>>diem2>>diem3;
}
void Sinhvien::Xuat()
{
	cout<<"\nMS sinh vien: "<<ms;
	cout<<"\nTen sinh vien: "<<ten;
	cout<<"\nDiem 1: "<<diem1;
	cout<<"\nDiem 2: "<<diem2;
	cout<<"\nDiem 3: ",diem3;
	cout<<"\nDiemTB: "<<diemTB;
	cout<<"\nXep loai: "<<loai;

}
float Sinhvien::TinhdiemTB()
{
	diemTB=(diem1+diem2+diem3)/3;
	return diemTB;
}
void Sinhvien::Xeploai()
{
	if(diemTB<3||diem1<3||diem2<3||diem3<3)
	 strcpy(loai,"yeu");
	 else{
	   if(diemTB<6||diem1<=5||diem2<=5||diem3<=5)
	     strcpy(loai,"Trung binh");
	    else{
	     if(diemTB<8||diem1<6.5||diem2<6.5||diem3<6.5)
	       strcpy(loai,"Kha");
		 else
		   strcpy(loai,"Gioi");
		   }
		     }
}
void Sinhvien::setMS(char *s)
{
	strcpy(ms,s);
}
void Sinhvien::setten(char *t)
{
	strcpy(ten,t);
}
float Sinhvien::setdiem1(float diem1)
{
	return diem1;
}
float Sinhvien::setdiem2(float diem2)
{
	return diem2;
}
float Sinhvien::setdiem3(float diem3)
{
	return diem3;
}
char *Sinhvien::getMS()
{
	return ms;
}
float Sinhvien::getdiemTB()
{
	return diemTB;
}
char *Sinhvien::getXeploai()
{
       //	gets(loai);
       return loai;
}
/*
main()
{

	float a,b,c;
	Sinhvien sv;
	sv.Nhap();
	sv.TinhdiemTB();
	sv.Xeploai();
	sv.Xuat();
	cout<<"\n"<<sv.setdiem1(a);
	getch();
} 
*/


