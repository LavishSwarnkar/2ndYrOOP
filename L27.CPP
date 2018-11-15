//27. Reading & Writing file using Constructor
#include<conio.h>
#include<iostream.h>
#include<fstream.h>

void main()
{	clrscr();

	char name[20];
	float cost;

	cout<<"Writing in file...";
	ofstream fout("Item.txt");
	cout<<"\nEnter name: "; cin>>name;
	fout<<name<<endl;
	cout<<"Enter cost: "; cin>>cost;
	fout<<cost<<endl;
	fout.close();

	cout<<"Reading from file...";
	ifstream fin("Item.txt");
	fin>>name;
	cout<<"\nName: "<<name;
	fin>>cost;
	cout<<"\nCost: "<<cost;
	fin.close();

	getch();
}