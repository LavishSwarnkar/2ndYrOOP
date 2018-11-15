//18. Implementing Copy Constructor
#include<conio.h>
#include<iostream.h>

class A
{   int a,b;
public:
	A()                     //Default Constructor
	{	a=1;	b=2;	}

	A(int x, int y)         //Parameterized Constructor
	{	a=x; 	b=y;	}

	A(A &x)               	//Copy Constructor
	{	a=x.a;	b=x.b;	}

	void display()
	{	cout<<"\na="<<a<<",b="<<b;
	}
};

void main()
{	clrscr();

	A a;
	a.display();

	A b(3,4);
	b.display();

	A c(a);             //Or A c=a;
	c.display();

	getch();
}