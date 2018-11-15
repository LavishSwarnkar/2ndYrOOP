//31. Implementing Virtual Base Class
#include<conio.h>
#include<iostream.h>

class A
{protected:
	int l;
public:
	void setL()
	{	cout<<"Enter l: "; cin>>l;	}
};

class B: virtual public A
{protected:
	int b;
public:
	void setB()
	{	cout<<"Enter b: "; cin>>b;	}
};

class C: virtual public A
{protected:
	int h;
public:
	void setH()
	{	cout<<"Enter h: "; cin>>h;	}
};

class D: public B, public C
{public:
	void vol()
	{	cout<<"\nVolume: "<<l*b*h;	}
};

void main()
{	clrscr();

	D d;
	d.setL();
	d.setB();
	d.setH();
	d.vol();

	getch();
}