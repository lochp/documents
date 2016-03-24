#include<conio.h>
#include<stdio.h>
#include<iostream>
using std::cin;
using std::cout;
class date
{
 		static int count;
 		private:
				  int dd, mm, yy;
		public:
				 date(){count ++ };
				 static int getcount(){return count;}
				 void reset(int, int, int);
};
int date::count=0;
date::date():dd(1), mm(1), yy(2000)
{}
				 
				 		  
