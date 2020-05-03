#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double m1;
	double m2;
	double m3;
	double m4;
	double m5;
	cout<<" Enter the marks of first subject";
	cin>>m1;
	cout<<" Enter the marks of second subject";
	cin>>m2;
	cout<<" Enter the marks of third subject";
	cin>>m3;
	cout<<" Enter the marks of fourth subject";
	cin>>m4;
	cout<<" Enter the marks of fifth subject";
	cin>>m5;
	double av =(m1+m2+m3+m4+m5)/5.0;
	cout<<"Average is:"<<av;
	getch();
}