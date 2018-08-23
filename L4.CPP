//4. WAP to implement Structure array
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct student
{	int rollNo;
	char name[20];
	float per;
};

void main()
{   student s[2];
	int size;
	clrscr();

	cout<<">>INPUT<<\nEnter No. of students: "; cin>>size;
	for(int i=0 ; i<size ; i++)
	{	cout<<"\nNo."<<i+1<<"\nEnter Roll No. : ";  cin>>s[i].rollNo;
		cout<<"Enter Name : "; 						gets(s[i].name);
		cout<<"Enter Percentage : "; 				cin>>s[i].per;
	}

	cout<<"\n\n>>OUTPUT<<\n";
	for(i=0 ; i<size ; i++)
	{	cout<<"\nNo."<<i+1<<"\nRoll No. : "<<s[i].rollNo;
		cout<<"\nName : "<<s[i].name;
		cout<<"\nPercentage : "<<s[i].per;
	}

	getch();
}
