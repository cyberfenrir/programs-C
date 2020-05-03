#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int d;
	cout<<"Enter the number of days : ";
	cin>>d;
	double a;
	if((d>=0)&&(d<=5))
	{
		a = 0.40*d;
		cout<<"The amount to be paid is Rs."<<a;
	}
	else if((d>=6)&&(d<=10))
	{
		a = 0.65*d;
		cout<<"The amount to be paid is Rs."<<a;
	}
	else if (d>10)
	{
		a = 0.80*d;
		cout<<"The amount to be paid is Rs."<<a;
	}
	else
	{
		cout<<"Invalid input of number of days.";
	}
	getch();
}