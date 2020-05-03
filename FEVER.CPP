#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double a;
	cout<<"Enter the body temperature in fahrenheit: ";
	cin>>a;
	if(a!=98.6)
	{
		cout<<"The person has fever: ";
	}
	else
	{
		cout<<"The person has no fever:: ";
	}
	getch();
}