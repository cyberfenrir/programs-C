#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a;
	char c;
	double b=0.0;
	cout<<"Enter the number ofdays stayed in the hotel: ";
	cin>>a;
	cout<<"Enter the type of room: ";
	cin>>c;
	if(c=='s')
	{
		b =(a*1000.0);
		cout<<"The hotel bill is Rs."<<b;
	}
	else if(c=='d')
	{
		b =(a*1500.0);
		cout<<"The hotel bill is Rs."<<b;
	}
	else if(c=='S')
	{
		b =(a*2000.0);
		cout<<"The hotel bill is Rs."<<b;
	}
	else if(c=='D')
	{
		b =(a*5000.0);
		cout<<"The hotel bill is Rs."<<b;
	}
	else
	{
		cout<<"Invalid input of choice.";
	}
	getch();
}