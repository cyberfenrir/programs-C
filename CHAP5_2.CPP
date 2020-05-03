#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float d=10.0;
	float st = 6.0;
	double mp;
	cout<<"Enter the printed price: ";
	cin>>mp;
	double sp = (((100-d)/100.0)*mp);
	double a = (((100+st)/100.0)*sp);
	cout<<"The amount to be paid is: "<<a;
	getch();
}