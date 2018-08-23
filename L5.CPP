//5. WAP to implement Scope Resolution operator
#include<iostream.h>
#include<conio.h>

int m=10;

void main()
{   int m=20;
	clrscr();

	{	int k = m;
		int m = 30;
		cout<<"In inner block, k = "<<k<<", m = "<<m<<", Global m = "<<::m;
	}
	cout<<"\nIn outer block, m = "<<m<<", Global m = "<<::m;

	getch();
}
