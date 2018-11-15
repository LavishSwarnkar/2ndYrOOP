//25. Binary operator overloading (Fn. returning object (Fr. Fn.))
#include<conio.h>
#include<iostream.h>

class A
{   int a;
public:
	A(){}

	A(int x)
	{	a=x;	}

	void display()
	{	cout<<"\na="<<a;
	}

	friend A operator +(A x, A y);
};

A operator +(A x, A y)
{	return A(x.a + y.a);	}

void main()
{	clrscr();

	A x(10), y(15), z;
	x.display();
	y.display();

	z = x + y;
	z.display();

	getch();
}