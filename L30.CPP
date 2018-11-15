//30. Implementing Pure Virtual function
#include<conio.h>
#include<iostream.h>

class A
{	public:
	virtual void show()
	{	cout<<"\nA show()"; 	}
	virtual void display()=0;
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

	B b;
	ptr = &b;
	ptr->show();
	ptr->display();

	getch();
}