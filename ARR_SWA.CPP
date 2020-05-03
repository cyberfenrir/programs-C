#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[20], temp, c, i,n,k;
	cout<<"How many elements do you want to enter: ";
	cin>>n;
	cout<<"Enter the numbers: \n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<" The original array is: \n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	c = n/2;
	for(i=0;i<c;i++)
	{
		k=n%2==0?c+i:c+i+1;
		temp = a[i];
		a[i] = a[k];
		a[k] = temp;
	}
	cout<<"\nThe array  after reverse is:\n ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	getch();
}