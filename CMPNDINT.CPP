#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	float r;
	float p;
	int n;
	cout<<"Enter the rate: ";
	cin>>r;
	cout<<"Enter the principal: ";
	cin>>p;
	cout<<"Enter the time: ";
	cin>>n;
	float l = 1+(r/100.0);
	float a =p*(pow(l,n));
	float c = a-p;
	cout<<"\n The amount is: "<<a;
	cout<<"\n The compound interst is: "<<c;
	getch();
}