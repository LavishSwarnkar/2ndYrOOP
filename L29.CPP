//29. Implementing Virtual function
#include<conio.h>
#include<iostream.h>

class A
{	public:
	virtual void show()
	{	cout<<"\nA show()"; 	}
	virtual void display()
	{	cout<<"\nA display()"; 	}
};
class B : public A
{	public:
	void show()
	{	cout<<"\nB show()"; 	}
	void display()
	{	cout<<"\nB display()"; 	}
};

void main()
{	clrscr();

	A *ptr;
	A a;
	ptr = &a;
	ptr->show();
	ptr->display();

	B b;
	ptr = &b;
	ptr->show();
	ptr->display();

	getch();
}