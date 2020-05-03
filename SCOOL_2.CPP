#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a;
	cout<<"\t\t\tMENU: ";
	cout<<"\n\t\t1. Celsius to Fahrenheit ";
	cout<<"\n\t\t2. Fahrenheit to Celsius ";
	cout<<"\n\t\t3. Celsius to kelvin ";
	int ch;
	cout<<"\n Enter the choice:";
	cin>>ch;
	double c,f,k;
	switch(ch)
	{
		case 1:   cout<<" Enter the temperature in Celsius: ";
			  cin>>a;
			  f = ((1.8*a)+32);
			  cout<<"The temperature in Fahrenheit scale is: "<<f;
			  break;

		case 2:   cout<<" Enter the temperature in Fahrenheit: ";
			  cin>>a;
			  c =((5.0*(a-32.0))/9.0);
			  cout<<"The temperature in Celsius scale is: "<<c;
			  break;

		case 3:   cout<<" Enter the temperature in Celsius: ";
			  cin>>a;
			  k =(a+273);
			  cout<<"The temperature in Kelvin scale is: "<<k;
			  break;

		default:  cout<<"Invalid input of choice.";
	}
	getch();
}
