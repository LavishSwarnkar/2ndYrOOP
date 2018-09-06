//7. Implementing Class
#include<conio.h>
#include<iostream.h>
#include<stdio.h>

class student
{   private:
	int roll;
	char name[20];

	void get_data()
	{	cout<<">>INPUT<<\nEnter Roll No.: ";
		cin>>roll;
		cout<<"Enter Name: ";
		gets(name);
	}

	public:
	void display()
	{   get_data();
		cout<<"\n>>OUTPUT<<\nRoll No.: "<<roll<<"\nName: "<<name;
	}
};

void main()
{   student s;
	clrscr();

	s.display();

	getch();
}