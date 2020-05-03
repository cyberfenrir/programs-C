#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	int d;
	int sum = 0;
	int pro = 1;
	int a = n;
	while(a>0)
	{
	   d = a%10;
	   sum = sum+d;
	   pro = pro*d;
	   a = a/10;
	}
	int b = pro+sum;
	if(n==b)
	{
		cout<<"It is a special two digit number";
	}
	else
	{
		cout<<"It is not a special two digit number";
	}
	getch();
}