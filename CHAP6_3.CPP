#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,a,b;
	int hcf;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	if(a<0)
	{
	    a = -a;
	}
	if(b<0)
	{
	    b = -b;
	}
	if(a>b)
	{
	     for(i=1; i<=a; i++)
	     {
		  if((a%i==0)&&(b%i==0))
		  {
		       hcf = i;
		  }
	     }
	}
	if(b>a)
	{
	     for(i=1; i<=b; i++)
	     {
		  if((b%i==0)&&(a%i==0))
		  {
		       hcf = i;
		  }
	     }
	}
	if(hcf==1)
	{
	    cout<<"The numbers are co-prime.";
	}
	else
	{
	     cout<<"The numbers are co-prime.";
	}
	getch();
}