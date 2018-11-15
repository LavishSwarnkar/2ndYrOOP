//24. Binary operator overloading (Fn. returning object (Mem. Fn.))
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

	A operator +(A x)
	{	return A(a + x.a);	}
};

void main()
{	clrscr();

	A x(10), y(15), z;
	x.display();
	y.display();

	z = x + y;
	z.display();

	getch();
}