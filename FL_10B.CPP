#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n,x;
	int sum = 0;
	cout<<"Enter the number of terms: ";
	cin>>n;
	for(i=0; i<=n; i++)
	{
	    x = (i*(i+1));
	    sum = sum+x;
	}
	cout<<"The sum of the series is :"<<sum;
	getch();
}