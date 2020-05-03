#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int sum = 0;
	int x,a,i;
	cout<<"Enter the number: ";
	cin>>a;
	for(i=1; i<=a; i++)
	{
	    if(a%i==0)
	    {
	      sum = sum+i;
	    }
	}
	x = sum/2;
	if(x==a)
	{
	    cout<<"The number is a perfect number :";
	}
	else
	{
	    cout<<"The number is not a perfect number :";
	}
	getch();
}