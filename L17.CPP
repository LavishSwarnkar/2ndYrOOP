//17. Implementing Implicit & Explicit calling of constructor
#include<conio.h>
#include<iostream.h>

class A
{   int a,b;
public:
	A()
	{   a=1; b=2;
	}

	A(int x, int y)
	{	a=x; b=y;
	}

	void display()
	{	cout<<"\na="<<a<<",b="<<b;
	}
};

void main()
{	clrscr();

	A a;           	//Default Constructor called
	a.display();

	A b(3,4);		//Implicit call to parameterized Constructor
	b.display();

	A c = A(5,6);	//Explicit call to parameterized Constructor
	c.display();

	getch();
}