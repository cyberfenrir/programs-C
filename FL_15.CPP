#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double sum = 0.0;
	double d = 0.0;
	int i,n;
	cout<<"Enter the number: ";
	cin>>n;
	for(i=1; i<=n; i++)
	{
	    d = (1/i);
	    sum = sum+d;
	}
	cout<<"The sum of the series is :"<<sum;
	getch();
}