#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char *N;
	cout<<"Enter the name of the customer ";
	cin>>N;
	char *A;
	cout<<"Enter the address of the customer";
	cin>>A;
	double p;
	cout<<"Enter the price";
	cin>>p;
	char ch;
	cout<<" Enter the choice";
	cin>>ch;
	double na,d;
	cout<<"Customer's name is:"<<N;
	cout<<"Customer's address is:"<<A;
	switch(ch)
	{
		case 'L' : if((p>0)&&(p<=25000))
			   {
			       d = 0;
			       na = p-d;
			       cout<<"The discount amount is:"<<d;
			       cout<<"The net amount is:"<<na;
			   }
			   else if((p>=25001)&&(p<=57000))
			   {
			       d = ((5.0*p)/100.0);
			       na = p-d;
			       cout<<"The discount amount is:"<<d;
			       cout<<"The net amount is:"<<na;
			   }
			   else if((p>=57001)&&(p<=100000))
			   {
			       d = ((7.5*p)/100.0);
			       na = p-d;
			       cout<<"The discount amount is:"<<d;
			       cout<<"The net amount is:"<<na;
			   }
			   else if(p>100000)
			   {
			       d = ((10.0*p)/100.0);
			       na = p-d;
			       cout<<"The discount amount is:"<<d;
			       cout<<"The net amount is:"<<na;
			   }
			   else
			   {
			       cout<<"Invalid input of price:";
			   }

			   break;

		case 'D' : if((p>0)&&(p<=25000))
			   {
			       d = ((5.0*p)/100.0);
			       na = p-d;
			       cout<<"The discount amount is:"<<d;
			       cout<<"The net amount is:"<<na;
			   }
			   else if((p>=25001)&&(p<=57000))
			   {
			       d = ((7.5*p)/100.0);
			       na = p-d;
			       cout<<"The discount amount is:"<<d;
			       cout<<"The net amount is:"<<na;
			   }
			   else if((p>=57001)&&(p<=100000))
			   {
			       d = ((10.0*p)/100.0);
			       na = p-d;
			       cout<<"The discount amount is:"<<d;
			       cout<<"The net amount is:"<<na;
			   }
			   else if(p>100000)
			   {
			       d = ((15.0*p)/100.0);
			       na = p-d;
			       cout<<"The discount amount is:"<<d;
			       cout<<"The net amount is"<<na;
			   }
			   else
			   {
			       cout<<"Invalid input of price:";
			   }

			   break;

		default:  cout<<"Invalid input of choice.";
	}
	getch();
}
