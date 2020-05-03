#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a = -1;
	int b = 1;
	int n,c,i;
	cout<<"Enter the number of terms: ";
	cin>>n;
	cout<<"The fibonacci series is ";
	for(i=1; i<=n; i++)
	{
	    c =a+b;
	    cout<<c<<" ";
	    a=b;
	    b=c;
	}
	getch();
}