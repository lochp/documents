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
		Sinhvien(){cout <<"Ham ktao khong truyen tham so";}
	void Nhap();
	void Xuat();
	float TinhdiemTB();
	void Xeploai();
	/*void setMS(char *s);
	void setten(char *t);
	float setdiem1(float diem1);
	float setdiem2(float diem2);
	float setdiem3(float diem3);
	char  *getMS();
	float getdiemTB();
	char *getXeploai();*/
};
void Sinhvien::Nhap()
{
	printf("\nNhap ma so sinh vien: ");
	cin.getline(ms,10);
	printf("\nNhap ten sinh vien:");
	cin.getline(ten,30);
	printf("\nNhap diem 1, diem 2,diem 3:");
//	scanf("%f %f %f",&diem1,&diem2,&diem3);
	cin>>diem1>>diem2>>diem3;
}
void Sinhvien::Xuat()
{
	printf("\nMS sinh vien: %s",ms);
	printf("\nTen sinh vien: %s",ten);
	printf("\nDiem 1: %f",diem1);
	printf("\nDiem 2: %f",diem2);
	printf("\nDiem 3: %f",diem3);
	cout<<"diemTB "<<diemTB;
	cout<<"loai: "<<loai;
}
float Sinhvien::TinhdiemTB()
{
	diemTB=(diem1+diem2+diem3)/3;
	return diemTB;
}
void Sinhvien::Xeploai()
{
	if(diemTB<3)
	 strcpy(loai,"yeu");
	 else
	 {
	   if(diemTB<6)
	     strcpy(loai,"Trung binh");
	    else
		 {
	     		if(diemTB<8)
	       					strcpy(loai,"Kha");
		 	   else
		   		 			strcpy(loai,"Gioi");
       }
    }
}
