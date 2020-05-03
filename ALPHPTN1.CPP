#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	int i, j, k, n;
	char c = 'A';
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(i=0; i<n; i++)
	{
		for(j=0; j<(n-i-1); j++)
		{
			cout<<" ";
		}
		for(k=0; k<(2*i+1); k++)
		{
			cout<<c++<<' ';
			if(c>'Z')
			{
				c = 'A';
			}
		}
		cout<<endl;
	}
	getch();
}