#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	cout<<"\t\t\tMENU: ";
	cout<<"\t\t1. One year old car ";
	cout<<"\t\t2. Two years old car ";
	int ch;
	cout<<" Enter the number of years the car was used ";
	cin>>ch;
	double p;
	cout<<" Enter the showroom price of the car ";
	cin>>p;
	double a;
	if(ch==1)
	{
		a = (p-((p*10.0)/100.0));
		cout<<"Value of the car is Rs."<<a;
	}
	else if(ch==2)
	{
		a = (p-((p*20.0)/100.0));
		cout<<"Value of the car is Rs."<<a;
	}
	else if(ch==3)
	{
		a = (p-((p*30.0)/100.0));
		cout<<"Value of the car is Rs."<<a;
	}
	else if(ch==4)
	{
		a = (p-((p*50.0)/100.0));
		cout<<"Value of the car is Rs."<<a;
	}
	else if(ch==5)
	{
		a = (p-((p*60.0)/100.0));
		cout<<"Value of the car is Rs."<<a;
	}
	else
	{
		cout<<"Invalid input of choice.";
	}
	getch();
}