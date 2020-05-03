#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a;
	cout<<"\t\t\tMENU: ";
	cout<<"\n\t\t1. Fahrenheit to Celsius";
	cout<<"\n\t\t2. Celsius to Fahrenheit";
	char ch;
	cout<<"\n Enter the choice:";
	cin>>ch;
	cout<<" Enter the temperature ";
	cin>>a;
	double c,f;
	switch(ch)
	{
		case 1:   c =((5.0*(a-32.0))/9.0);
			  cout<<"The temperature in Celsius scale is:"<<c;
			  break;

		case 2:   f = ((1.8*a)+32);
			  cout<<"The temperature in Fahrenheit scale is"<<f;
			  break;

		default:  cout<<"Invalid input of choice.";
			  break;
	}
	getch();
}
