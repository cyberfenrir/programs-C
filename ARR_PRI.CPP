#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[10], n, i, j, c;
	int s = 0;
	cout<<"How many elements do you want to enter: ";
	cin>>n;
	cout<<"Enter the numbers: \n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=1;j<=a[i];j++)
		{
		   if(a[i]%j==0)
		{
			c++;
		}
		}
		if(c==2)
		{
		   s = s+a[i];
		}
	}
	cout<<"The sum of prime numbers is: "<<s;
	getch();
}