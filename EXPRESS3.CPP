#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	double a;
	double x;
	double e;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second numben: ";
	cin>>x;
	cout<<"Enter the third numbe: ";
	cin>>e;
	double y = (2.0*x);
	double c =(sin(a)+atan(a))-pow(e,y);
	double b =sqrt(c);
	cout<<"The value of the expression is: "<<b;
	getch();
}