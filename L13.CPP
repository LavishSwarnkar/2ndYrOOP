//13. Creating a class Simple Intrest
#include<conio.h>
#include<iostream.h>

class si
{	int p, t;
	float r;

public:	void setdata(int p2, int t2, float r2 = 0.15)
		{	p = p2;
			t = t2;
			r = r2;
		}

		void display();
		float calcamt();
};

void si::display()
{	cout<<"\n\nPrincipal Amt. = "<<p;
	cout<<"\nTime = "<<t<<" Yrs.";
	cout<<"\nRate = "<<r<<"%";
	cout<<"\nSimple Intrest = "<<calcamt();
}

float si::calcamt()
{    return (p*r*t)/100;
}

void main()
{	clrscr();
	int p,t;
	float r;
	si s1;

	cout<<"Enter Amt. : "; cin>>p;
	cout<<"\nEnter Time : "; cin>>t;
	s1.setdata(p,t);
	s1.display();

	cout<<"\nEnter Amt. : "; cin>>p;
	cout<<"\nEnter Time : "; cin>>t;
	cout<<"\nEnter Rate : "; cin>>r;
	s1.setdata(p,t,r);
	s1.display();

	getch();
}