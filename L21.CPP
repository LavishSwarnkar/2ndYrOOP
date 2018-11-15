//21. WAP for counting no. of active objects of a class
#include<conio.h>
#include<iostream.h>

class A
{   static count, total;
public:
	A()
	{	cout<<"\nConstructor";	count++; total++;	}

	~A()
	{	cout<<"\nDestructor";	count--;	}

	void display()
	{	cout<<"\nNo. of active objects = "<<count;
		cout<<"\nNo. of total Objects = "<<total;
	}
};

int A::count, A::total;

void main()
{	clrscr();

	A x;
	x.display();		//1
	{	A p,q,r;
		r.display();    //4
	}
	x.display();        //1

	getch();
}