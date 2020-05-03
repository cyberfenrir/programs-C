#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double nv = 10.0;
	double r = 10.0;
	double AI = 2000.0;
	double n = (AI*100.0)/(nv*r);
	double x =3000-n ;
	cout<<"The number of shares the person has now are: "<<n;
	cout<<"\nThe number of shares needed to be purchased are: "<<x;
	getch();
}