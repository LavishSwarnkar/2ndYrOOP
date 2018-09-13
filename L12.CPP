//12. Implementing inline function
#include<conio.h>
#include<iostream.h>

inline int sum(int a, int b)
{	return a+b;
}

void main()
{	clrscr();

	cout<<"567 + 843 = "<<sum(567,843);

	getch();
}