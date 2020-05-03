#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double p;
	cout<<"Enter the price of the article: ";
	cin>>p;
	double D1 = 30.0;
	double D2 = 20.0;
	double D3 = 10.0;
	double a = ((1-(D1/100))*p);
	double b = ((1-(D2/100))*(1-(D3/100))*p);
	if(a>b)
	{
	    cout<<"The second offer is better for the customer: ";
	}
       else if(a<b)
	{
	    cout<<"The First offer is better for the customer: ";
	}
	else
	{
	      cout<<"Both the offers are equal: ";
       }
	getch();
}