//3. WAP to implement Structure
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct student
{	int rollNo;
	char name[20];
	float per;
};

void main()
{   student s;
	clrscr();

	cout<<">>INPUT<<";

	cout<<"\nEnter Roll No. : ";    cin>>s.rollNo;
	cout<<"Enter Name : "; 			gets(s.name);
	cout<<"Enter Percentage : "; 	cin>>s.per;

	cout<<"\n\n>>OUTPUT<<";

	cout<<"\nRoll No. : "<<s.rollNo;
	cout<<"\nName : "<<s.name;
	cout<<"\nPercentage : "<<s.per;

	getch();
}
