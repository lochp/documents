#include <stdio.h>
#include<conio.h>
#include<string.h>
void strcpy(char *s1, char *s2)
{
	while (*s1++ = *s2++);
}
/*
int strlen(char *s)
{
	int i=0;
	while (s[i])
		i++;
	return i;
}
int stoi(char s[])
{
	int p, i=1;
	if (s[0]==0) return 0;
	p = s[0]-'0';
	while (s[i])
	{
		p = p*10+s[i]-'0';
		i++;
	}
	return p;
}
*/
/*int strcat(char *s)
{
	char *x = s;
	while (*s)
		s++;
	return s-x;
}*/
int stoi(char *s)
{
	int p;
	if (*s==0) return 0;
	p = *s++ - '0';
	while (*s)
	{
		p = p*10 + *s-'0';
		s++;
	}
	return p;
}
int strcat(char *s1, char *s2)
{
	while(*s1)s1++;
	while(*s1++ = *s2++);				  
}
int strcmp(char *s1,char *s2)
{
	while(*s1==*s2 && *s1)
	{
		s1++;
		s2++;
	}
	return *s1-*s2;		  
}
main()
{
   //int n;
 	char a[20], b[20];
	//n=strcmp(a,b);
	printf("\nNhap chuoi a: ");
	gets(a);
	//printf("\nNhap chuoi b: ");
	//gets(b);
	puts(a);
	printf("%d",stoi(a));
	//puts(b);
	//printf("Hai chuoi duoc ghep lai: ");
	//strcat(a,b);
	//puts(a);
	//n=strcmp(a,b);
	//printf("\nSo sanh 2 chuoi a va b: \n");
	/*if (strcmp(a,b)==0)
          printf("a=b");
			 else if(strcmp(a,b)>0)
			 		printf("a>b");
		         else if(strcmp(a,b)<0)
 			 		 		printf("a<b");
	*/
   getch();
}
