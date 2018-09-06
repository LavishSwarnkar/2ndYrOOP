#include<conio.h>
#include<iostream.h>

void swap(int &x, int &y)
{	int c = x;
	x = y;
	y = c;
}

void main()
{   int a,b;
	clrscr();

	cout<<"Enter two numbers: ";
	cin>>a>>b;

	cout<<"Before swapping, A = "<<a<<", B = "<<b;

	swap(a, b);
	cout<<"After swapping, A = "<<a<<", B = "<<b;

	getch();
}