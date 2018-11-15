//19. Overloading Increment & Decrement Operators
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

	void operator ++()
	{	a++;	}

	void operator --()
	{	a--;	}
};

void main()
{	clrscr();

	A a(5);
	a.display();

	++a;
	a.display();

	--a;
	a.display();

	getch();
}