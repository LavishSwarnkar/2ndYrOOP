//8. Function overloading with class
#include<conio.h>
#include<iostream.h>

class volume
{	public:

	void calculate(int side)
	{	int volume = side*side*side;
		cout<<"Volume of Cube with side "<<side<<" is "<<volume<<" cubic units";
	}

	void calculate(int l, int b, int h)
	{	int volume = l*b*h;
		cout<<"Volume of Cuboid with dimensions "<<l<<","<<b<<","<<h<<" is "<<volume<<" cubic units";
	}

	void calculate(int r, int h)
	{	float volume = 3.14*r*r*h;
		cout<<"Volume of Sphere with dimensions "<<r<<","<<h<<" is "<<volume<<" cubic units";
	}
};

void main()
{	clrscr();
	volume v;
	int a,b,c;
	cout<<"Enter side of Cube: "; cin>>a;
	v.calculate(a);
	cout<<"\n\nEnter dimensions of Sphere (r,h): "; cin>>b>>c;
	v.calculate(b,c);
	cout<<"\n\nEnter dimensions of Cuboid (l,b,h): "; cin>>a>>b>>c;
	v.calculate(a,b,c);

	getch();
}