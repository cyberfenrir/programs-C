#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a, b, s, d, p, q, r;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	s=a+b;
	cout<<"\n Sum is: "<<s;
	d=a-b;
	cout<<"\n Difference is: "<<d;
	p=a*b;
	cout<<"\n Product is: "<<p;
	q=a/b;	
	cout<<"\n Quotient is: "<<q;
	r=a%b;
	cout<<"\n Remainder is: "<<r;
	getch();
}