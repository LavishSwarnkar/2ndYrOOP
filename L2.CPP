//3.WAP in C++ for designing calculator using switch case
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{   int a,b,c;
	char op;
	clrscr();
	cout<<"Enter value of a & b: ";
	cin>>a>>b;
	cout<<"Enter opearator (+,-,*,/,%) : ";
	cin>>op;
	switch(op){
		case '+': c = a+b; cout<<"a + b = "<<c; break;
		case '-': c = a-b; cout<<"a - b = "<<c; break;
		case '*': c = a*b; cout<<"a * b = "<<c; break;
		case '/': c = a/b; cout<<"a / b = "<<c; break;
		case '%': c = a%b; cout<<"a % b = "<<c; break;
		default : cout<<"\nWrong operator";
	}
	getch();
}
