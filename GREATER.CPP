#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double a;
	double b;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	if(a>b)
	{
		cout<<a<<"is Greater: ";
	}
	else
	{
		cout<<b<<" is Greater: ";
	}
	getch();
}