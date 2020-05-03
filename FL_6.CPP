#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int i,n;
	double m = 0.0;
	double t;
	cout<<"Enter the number of terms: ";
	cin>>n;
	for(i=0; i<=n; i++)
	{
	    t = pow(2,i);
	    m = m+t;
	}
	cout<<"The sum is :"<<m;
	getch();
}