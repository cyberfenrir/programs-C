#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n;
	cout<<" Enter the number of terms: ";
	cin>>n;
	int i;
	int a = -1;
	int b = 1;
	int c;
	cout<<"The Fibonacci Series is: ";
	for(i=1;i<=n;i++)
	{
	    c = a+b;
	    cout<<" "<<c;
	    a=b;
	    b=c;
	}

	getch();
}
