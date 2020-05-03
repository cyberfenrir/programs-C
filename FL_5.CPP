#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n;
	int c = 0;
	cout<<"Enter the number :\n ";
	cin>>n;
	cout<<"The factors are: "
	for(i=1; i<=n; i++)
	{
	    if((n%i)==0)
	    {
	       c = c+1;
	       cout<<i<<"\n";
	    }
	}
	cout<<"The number of factors is :"<<c;
	getch();
}