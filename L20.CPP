//20. Implementing Destructor
#include<conio.h>
#include<iostream.h>

class A
{
public:
	A()
	{	cout<<"\nContructor invoked!";	}

	~A()
	{	cout<<"\nDestructor invoked!";	}

};

void main()
{	clrscr();

	{	A x;	}

	getch();
}