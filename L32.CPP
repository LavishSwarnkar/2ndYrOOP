//32. Finding the Order of execution of Constructor & Destructor
#include<conio.h>
#include<iostream.h>

class A
{public:
	A()
	{	cout<<"\nA()";	}
	~A()
	{	cout<<"\n~A()";	}
};

class B: public A
{public:
	B()
	{	cout<<"\nB()";	}
	~B()
	{	cout<<"\n~B()";	}
};

class C: public A
{public:
	C()
	{	cout<<"\nC()";	}
	~C()
	{	cout<<"\n~C()";	}
};

class D: public B, public C
{public:
	D()
	{	cout<<"\nD()";	}
	~D()
	{	cout<<"\n~D()";	}
};

void main()
{	clrscr();

	{	D d;	}

	getch();
}