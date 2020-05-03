#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double u;
	double t;
	double f;
	cout<<"Enter the initial velocity: ";
	cin>>u;
	cout<<"Enter the acceleration: ";
	cin>>f;
	cout<<"Enter the time: ";
	cin>>t;
	double x = (u*t)+(0.5*(f*t*t));
	cout<<"The distance covered is: "<<x;
	getch();
}