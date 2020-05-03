#include<iostream.h>
#include<conio.h>
void Discount(double pa, double d)
{
    double a = ((1-(d/100))*pa);
    cout<<"The amount after giving single discount is:"<<a;
}
void Discount(double pa, double d, double d4)
{
    double a1 = ((1-(d/100))*(1-(d4/100))*pa);
    cout<<"The amount after giving two successive discount is:"<<a1;
}
void Discount(double pa, double d, double d4, double d5)
{
    double a2 = ((1-(d/100))*(1-(d4/100))*(1-(d5/100)*pa));
    cout<<"The amount after giving two successive discount is:"<<a2;
}
void main()
{
	clrscr();
	double pa, d, d4, d5;
	cout<<"Enter the principal ";
	cin>>pa;
	cout<<"Enter the first discount percent: ";
	cin>>d;
	cout<<"Enter the second discount percent: ";
	cin>>d4;
	cout<<"Enter the third discount percent: ";
	cin>>d5;
	Discount(pa,d);
	Discount(pa,d,d4);
	Discount(pa,d,d4,d5);
	getch();
}