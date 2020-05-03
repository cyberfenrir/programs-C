#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double a;
	double b;
	double c;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	cout<<"Enter third number: ";
	cin>>c;
	if((a>b)&&(b>c))
	{
		cout<<"The maximum number is "<<a;
		cout<<"\nThe minimum number is "<<c;
	}
	else if((b>c)&&(c>a))
	{
		cout<<"The maximum number is "<<b;
		cout<<"\nThe minimum number is "<<a;
	}
	else if((c>a)&&(a>b))
	{
		cout<<"The maximum number is "<<c;
		cout<<"\nThe minimum number is "<<b;
	}
	else if((a>c)&&(c>b))
	{
		cout<<"The maximum number is "<<a;
		cout<<"\nThe minimum number is "<<b;
	}
	else if((c>b)&&(b>a))
	{
		cout<<"The maximum number is "<<c;
		cout<<"\nThe minimum number is "<<a;
	}
	else if((b>a)&&(a>c))
	{
		cout<<"The maximum number is "<<b;
		cout<<"\nThe minimum number is "<<c;
	}
	else
	{
		cout<<"Invalid input of numbers.";
	}
	getch();
}