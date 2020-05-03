#include<iostream.h>
#include<conio.h>
void Area(int b1, int h1)
{
    double area = b1*h1;
    cout<<"Area of parallelogram is:"<<area;
}
void Area(double d1, double d2)
{
    double x = (1/2)*(d1+d2);
    cout<<"Area of rhombus is:"<<x;
}
void Area(double a, double b, double h)
{
    double z = (1/2)*(a+b)*h;
    cout<<"Area of trapezium is:"<<z;
}
void main()
{
	clrscr();
	int b1, h1;
	cout<<"Enter the base of parallelogram ";
	cin>>b1;
	cout<<"Enter the height of parallelogram ";
	cin>>h1;
	Area(b1,h1);
	double d1, d2;
	cout<<"Enter the first diagonal of rhombus ";
	cin>>d1;
	cout<<"Enter the second diagonal of rhombus ";
	cin>>d2;
	Area(d1, d2);
	double a,h;
	double b;
	cout<<"Enter the first parallel side of the trapezium ";
	cin>>a;
	cout<<"Enter the second parallel side of the trapezium ";
	cin>>b;
	cout<<"Enter the height of a trapezium ";
	cin>>h;
	Area(a,b,h);
	getch();
}