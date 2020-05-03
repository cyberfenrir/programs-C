#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double a;
	double c = 200.0;
	double b;
	cout<<"Enter the number of calls: ";
	cin>>a;
	if((a>=1)&&(a<=200))
	{
		b =(a*1.0)+c;
		cout<<"The amount to be paid is Rs."<<b;
	}
	else if((a>=201)&&(a<=500))
	{
		b = (a*1.25)+c;
		cout<<"The amount to be paid is Rs."<<b;
	}
	else if((a>=501)&&(a<=800))
	{
		b = (a*1.50)+c;
		cout<<"The amount to be paid is Rs."<<b;
	}
	else if((a>=801)&&(a<=1000))
	{
		b = (a*1.75)+c;
		cout<<"The amount to be paid is Rs."<<b;
	}
	else if(a>1000)
	{
		b = (a*2.00)+c;
		cout<<"The amount to be paid is Rs."<<b;
	}
	else
	{
		cout<<"Invalid input of unit.";
	}
	getch();
}