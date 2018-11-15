//22. Binary operator overloading (Fn. returning value (Mem. Fn.))
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

	int operator +(A x)
	{	return a + x.a;	}
};

void main()
{	clrscr();

	A x(10), y(15);
	x.display();
	y.display();

	cout<<"\nx.a + y.a = "<<x+y;

	getch();
}