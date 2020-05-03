#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a, b;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"The numbers after swapping their values are: "<<a<<" and "<<b;
	getch();
}