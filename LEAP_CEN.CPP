#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a;
	cout<<"Enter the year: ";
	cin>>a;
	if(a>=0)
	{
	   if((a%4)==0)
	   {
	       if((a%100)==0)
	       {
		     cout<<"It is a leap year and also a century. ";
	       }
	       else
	       {
		     cout<<"It is a leap year but not a century. ";
	       }
	   }
	   else
	   {
		     cout<<"It is not a leap year. ";
	   }
	}

	else
	{
		cout<<"Invalid input of year. ";
	}
	getch();
}