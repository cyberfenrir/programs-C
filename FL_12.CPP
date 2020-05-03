#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,f;
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	for(j=n-1; j>0; j--)
	{
	    f = 0;
	    for(i=1; i<=j; i++)
	    {
	       if(j%i==0)
	       {
		  f++;
	       }
	    }
	    if (f==2)
	    {
		cout<<"The previous prime number is "<<j;
		break;
	    }
	 }
	getch();
}