#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n;
	int pro = 1;
	cout<<"Enter the number of terms: ";
	cin>>n;
	for(i=1; i<=n; i++)
	{
	    pro = pro*i;
	}
	cout<<"The factorial of the number is :"<<pro;
	getch();
}