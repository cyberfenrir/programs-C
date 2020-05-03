#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	cout<<"\t\t\tMENU: ";
	cout<<"\t\t0. Ground Floor";
	cout<<"\t\t1. First Floor.";
	cout<<"\t\t2. Second Floor ";
	cout<<"\t\t3. Third Floor ";
	char ch;
	cout<<" Enter the floor number";
	cin>>ch;
	double t,d1,d2;
	double p;
	cout<<" Enter the price of the flat:";
	cin>>p;
	switch(ch)
	{
		case 0  : d1 = ((10.0*p)/100.0);
			  d2 = ((8.0*p)/100.0);
			  t = p-(d1+d2);
			  cout<<"The total price of the flat is:"<<t;
			  break;

		case 1  : d1 = ((2.0*p)/100.0);
			  d2 = ((1.0*p)/100.0);
			  t = p-(d1+d2);
			  cout<<"The total price of the flat is:"<<t;
			  break;

		case 2  : d1 = ((5.0*p)/100.0);
			  d2 = ((5.0*p)/100.0);
			  t = p-(d1+d2);
			  cout<<"The total price of the flat is:"<<t;
			  break;

		case 3   :d1 = ((7.5*p)/100.0);
			  d2 = ((10.0*p)/100.0);
			  t = p-(d1+d2);
			  cout<<"The total price of the flat is:"<<t;
			  break;

		default:  cout<<"Invalid input of choice.";
	}
	getch();
}
