#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n,d,sum=0;
	cout<<"Enter the number: ";
	cin>>n;
	int c = n;
	for(i=1; i<=n; i++)
	{
	    d = c%10;
	    c=c/10;
	    sum=sum+d;
	}
	cout<<"The sum of the digits is:"<<sum;
	getch();

}