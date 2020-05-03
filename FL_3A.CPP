#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n,sq;
	cout<<"Enter the number of terms: ";
	cin>>n;
	cout<<"The squres of the numbers are: \n";
	for(i=1; i<=n; i++)
	{
	    sq = i*i;
	    cout<<sq<<"\n";
	}
	getch();
}