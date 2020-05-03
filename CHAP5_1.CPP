#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float r=5.0;
	float p;
	int n;
	cout<<"Enter the principal: ";
	cin>>p;
	float I1 = (p*r*1)/100.0;
	cout<<"\n The interest for the first year is: "<<I1;
	double A1 = p+I1;
	float I2 = (A1*r*1)/100.0;
	cout<<"\n The interest for the second year is: "<<I2 ;
	double A2 = A1+I2;
	float I3 = (A2*r*1)/100.0;
	double A3 = A2+I3;
	cout<<"\n The Amount for the third year is: "<<A3 ;
	getch();
}