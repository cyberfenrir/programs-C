#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int w;
	int x;
	int y;
	int z;
	double P;
	cout<<"Enter the first value: ";
	cin>>w;
	cout<<"Enter the second value: ";
	cin>>x;
	cout<<"Enter the third value: ";
	cin>>y;
	cout<<"Enter the fourth value: ";
	cin>>z;
	P = (w+x)/(y-z);
	cout<<"The value of P is: "<<P;
	getch();
}