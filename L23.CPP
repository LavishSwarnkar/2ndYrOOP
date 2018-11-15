//23. Binary operator overloading (Fn. returning value (Fr. Fn.))
#include<conio.h>
#include<iostream.h>

class A
{   int a;
public:
	A(int x)
	{	a=x;	}

	void display()
	{	cout<<"\na="<<a;
	}

	friend int operator +(A x, A y)
	{	return x.a + y.a;	}
};


void main()
{	clrscr();

	A x(10), y(15);
	x.display();
	y.display();

	cout<<"\nx.a + y.a = "<<x+y;

	getch();
}