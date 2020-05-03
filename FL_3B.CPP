#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n,cu;
	cout<<"Enter the number of terms: ";
	cin>>n;
	cout<<"The cube of the numbers are: \n";
	for(i=1; i<=n; i++)
	{
	    cu = i*i*i;
	    cout<<cu<<"\n";
	}
	getch();
}