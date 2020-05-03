#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n;
	cout<<"Enter the number: ";
	cin>>n;
	for(i=1; i<=n; i++)
	{
	    if((n%i)==0)
	    {
		cout<<"The factors of the number are :"<<i;
	    }
	}

	getch();
}