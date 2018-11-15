//26. Overloading == operator for comparing 2 strings
#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>

class string
{   char s[20];
public:
	void input()
	{	cout<<"Enter string: ";	gets(s);	}

	char * get()
	{	return s;	}

	int operator ==(string x)
	{	return !strcmpi(s, x.s);	}
};

void main()
{	clrscr();

	string x, y;
	x.input(); y.input();

	if(x==y)
		cout<<"\nStrings "<<x.get()<<" & "<<y.get()<<" are Equal.";
	else
		cout<<"\nStrings "<<x.get()<<" & "<<y.get()<<" are NOT Equal.";

	getch();
}