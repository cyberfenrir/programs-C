#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n;
	int c;
	cout<<"Enter the number: ";
	cin>>n;
	for(i=0; i<=n; i++)
	{
	    if((n%i)==0)
	    {
	       c = c+1;
	    }
	}
	if(c==2)
	{
	    cout<<"The number is prime :";
	}
	else
	{
	    cout<<"The number is not prime :";
	}

	getch();
}