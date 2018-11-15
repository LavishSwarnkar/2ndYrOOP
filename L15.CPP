//15. Implementing Friend function in 3 classes
#include<conio.h>
#include<iostream.h>

class B;
class C;

class A
{	int x;

public:
	A(int a)
	{	x = a;
	}

	friend int sum(A a, B b, C c);
};

class B
{   int y;

public:
	B(int b)
	{	y = b;
	}

	friend int sum(A a, B b, C c);
};

class C
{   int z;

public:
	C(int c)
	{	z = c;
	}

	friend int sum(A a, B b, C c);
};

int sum(A a,B b, C c)
{	return a.x + b.y + c.z;
}

void main()
{	clrscr();

	A a(536);
	B b(432);
	C c(632);

	cout<<"Sum of private variables of 3 classes is "<<sum(a,b,c);

	getch();
}