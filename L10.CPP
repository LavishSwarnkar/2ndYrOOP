//10. Static Variable vs Normal Variable
#include<conio.h>
#include<iostream.h>

void f1()
{   int count = 0;
	cout<<"\nCount = "<<++count;
}

void f2()
{   static int count;
	cout<<"\nCount = "<<++count;
}

void main()
{	clrscr();
	cout<<"For Normal Variable:- ";
	for(int i=0 ; i<3 ; i++)
		f1();
	cout<<"\n\nFor Static Variable:- ";
	for(i=0 ; i<3 ; i++)
		f2();
	getch();
}