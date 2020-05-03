#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char ch;
	double q;
	cout<<"Enter the code of the city: ";
	cin>>ch;
	cout<<"Enter the weight of the parcel: ";
	cin>>q;
	double a;
	double b;
	switch(ch)
	{
		case 'K': if((q>=0)&&(q<=100))
			  {
			     a = q*45.0;
			     cout<<"The charge is Rs."<<a;
			  }
			  else if(q>100)
			  {
			     b = q*75.0;
			     cout<<"The charge is Rs."<<b;
			  }
			  else
			  {
			     cout<<"Invalid input of weight.";
			  }
			  break;

		case 'M': if((q>=0)&&(q<=100))
			  {
			     a = q*65.0;
			     cout<<"The charge is Rs."<<a;
			  }
			  else if(q>100)
			  {
			     b = q*95.0;
			     cout<<"The charge is Rs."<<b;
			  }
			  else
			  {
			     cout<<"Invalid input of weight.";
			  }
			  break;
		case 'C': if((q>=0)&&(q<=100))
			  {
			     a = q*75.0;
			     cout<<"The charge is Rs."<<a;
			  }
			  else if(q>100)
			  {
			     b = q*115.0;
			     cout<<"The charge is Rs."<<b;
			  }
			  else
			  {
			     cout<<"Invalid input of weight.";
			  }
			  break;
		case 'D': if((q>=0)&&(q<=100))
			  {
			     a = q*90.0;
			     cout<<"The charge is Rs."<<a;
			  }
			  else if(q>100)
			  {
			     b = q*125.0;
			     cout<<"The charge is Rs."<<b;
			  }
			  else
			  {
			     cout<<"Invalid input of weight.";
			  }
			  break;

		default:  cout<<"Invalid input of choice.";
	}
	getch();
}
