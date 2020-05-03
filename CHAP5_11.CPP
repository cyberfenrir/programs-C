#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double q;
	double a;
	cout<<"Enter the quantity of water consumed: ";
	cin>>q;
	if((q>=0)&&(q<=45))
	{
		cout<<"No need to pay Income Tax.";
	}
	else if((q>45)&&(q<=75))
	{
		a = ((q*475.0)/100.0);
		cout<<"The amount of tax to be paid is Rs."<<a;
	}
	else if((q>75)&&(q<=125))
	{
		a = ((q*750.0)/100.0);
		cout<<"The amount of tax to be paid is Rs."<<a;
	}
	else if((q>125)&&(q<=200))
	{
		a = ((q*1225.0)/100.0);
		cout<<"The amount of tax to be paid is Rs."<<a;
	}
	else if((q>200)&&(q<=350))
	{
		a = ((q*1650.0)/100.0);
		cout<<"The amount of tax to be paid is Rs."<<a;
	}
	else if(q>350)
	{
		a = ((q*2000.0)/100.0);
		cout<<"The amount of tax to be paid is Rs."<<a;
	}
	else
	{
		cout<<"Invalid input of quantity.";
	}
	getch();
}