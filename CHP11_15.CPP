#include<iostream.h>
#include<conio.h>
void Perimeter(double r)
{
    double peri = 3.14*2*r;
    cout<<"Perimeter of circle is:"<<peri;
}
void Perimeter(int s)
{
    double x = 4*s;
    cout<<"Perimeter of square is:"<<x;
}
void Perimeter(double l, double b)
{
    double z = 2*(l+b);
    cout<<"Perimeter of rectangle is:"<<z;
}
void main()
{
	clrscr();
	double r;
	cout<<"Enter the radius ";
	cin>>r;
	Perimeter(r);
	int s;
	cout<<"Enter the side of square ";
	cin>>s;
	Perimeter(s);
	double l;
	double b;
	cout<<"Enter the length ";
	cin>>l;
	cout<<"Enter the breadth ";
	cin>>b;
	Perimeter(l,b);
	getch();
}