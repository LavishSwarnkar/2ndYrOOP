//14. Implementing new & delete operator
#include<conio.h>
#include<iostream.h>

void main()
{	clrscr();

	int *p = new int;
	cout<<"Enter p: ";	cin>>*p;
	if(p)
	{	cout<<"\nMemory allocated...\nMemory deallocated...";
		delete p;
		cout<<"\n\np = "<<*p<<", after delete p;";
	}
	else
		cout<<"\nMemory allocation failed!";

	getch();
}