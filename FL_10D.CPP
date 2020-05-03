#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int i,n,b;
	double x;
	double pro = 1.0;
	cout<<"Enter the number of terms: ";
	cin>>n;
	cout<<"Enter the number: ";
	cin>>b;
	for(i=1; i<=n; i++)
	{
	    x = (pow(b,i));
	    pro = pro*x;
	}
	cout<<"The product of the series is :"<<pro;
	getch();
}