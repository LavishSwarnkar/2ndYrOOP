//9. Count no of calls of function
#include<conio.h>
#include<iostream.h>

class stat
{   static int count;
	public:
	static void getcount()
	{	cout<<"\nCount = "<<++count;
	}
};

int stat::count;

void main()
{	clrscr();
	for(int i=0 ; i<5 ; i++)
		stat::getcount();
	getch();
}