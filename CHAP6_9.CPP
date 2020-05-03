#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a;
	cout<<"Enter the number: ";
	cin>>a;
	int i, rev, r=0;
	int n = a;
	while(n>0)
	{
	   r = n%10;
	   rev = (rev*10)+r;
	   n = n/10;
	}
	int x = rev;
	int p;
	int q = 0;
	while(x>0)
	{
	   p = x%10;
	   if(p!=0)
	   {
	       q = (q*10)+p;
	       x = x/10;
	   }
	   else
	   {
	       x = x/10;
	   }
	}
	cout<<"After removing all the zeroes from the given number: "<<a<<" is: "<<q;
	getch();
}