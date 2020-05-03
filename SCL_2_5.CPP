#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[30], n, i, j, t;
	cout<<"How many elements do you want to enter (not more than 30): ";
	cin>>n;
	cout<<"Enter the numbers: \n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"The unsorted array is: \n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<(n-i);j++)
		{
			if(a[j-1]<a[j])
			{
			    t = a[j-1];
			    a[j-1] = a[j];
			    a[j] = t;
			}
		}
	}
	cout<<"\nThe sorted array is: \n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	getch();
}