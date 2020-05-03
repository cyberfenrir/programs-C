#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n,x;
	int pro = 1;
	cout<<"Enter the number of terms: ";
	cin>>n;
	for(i=0; i<=n; i++)
	{
	    x = (i+(i+1));
	    pro = pro*x;
	}
	cout<<"The product of the series is :"<<pro;
	getch();
}