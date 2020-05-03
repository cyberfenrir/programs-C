#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int emp_no;
	cout<<"Enter the employee number: ";
	cin>>emp_no;
	int a;
	cout<<"Enter the age of the employee: ";
	cin>>a;
	double bs;
	cout<<"Enter the basic salary of the person: ";
	cin>>bs;
	char g;
	cout<<"Enter the gender of the person: ";
	cin>>g;
	double hra = (40.0/100.0)*bs;
	double pf = (12.0/100.0)*bs;
	double epf = (2.0/100.0)*bs;
	double gs = bs+hra;
	cout<<"The gross salary is Rs. "<<gs;
	double ns = gs-(pf+epf);
	cout<<"\nThe net salary is Rs. "<<ns;
	double ags = 12*gs;
	switch(g)
	{
		case 'M': if(ags>=150000)
			  {
			      cout<<"\nHe is an Income Tax payer.";
			  }
			  else if((ags>0)&&(ags<150000))
			  {
			      cout<<"\nHe is not an Income Tax payer.";
			  }
			  else
			  {
			     cout<<"\nInvalid input of basic salary.";
			  }
			  break;

		case 'F': if(ags>=200000)
			  {
			      cout<<"\nShe is an Income Tax payer.";
			  }
			  else if((ags>0)&&(ags<200000))
			  {
			      cout<<"\nShe is not an Income Tax payer.";
			  }
			  else
			  {
			     cout<<"\nInvalid input of basic salary.";
			  }
			  break;
		default:  cout<<"\nInvalid input of gender!";
	}
	getch();
}
