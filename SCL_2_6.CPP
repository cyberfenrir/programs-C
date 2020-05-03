#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int m[30], val, i, x,j,t=0;
	int start = 0;
	int end = 0;
	int mid = 0;
	int f = 0;
	cout<<"How many elements do you want to enter (not more than 30): ";
	cin>>x;
	cout<<"Enter the numbers: \n";
	for(i=0;i<x;i++)
	{
		cin>>m[i];
	}
	cout<<"Enter the number you want to search: ";
	cin>>val;
	for(i=0;i<x;i++)
	{
		for(j=1;j<(x-i);j++)
		{
			if(m[j-1]>m[j])
			{
				t=m[j-1];
				m[j-1]=m[j];
				m[j]=t;
			}
		}
	}
	start = 0;
	end = x-1;
	while((start<=end)&&(f==0))
	{
		mid = (start+end)/2;
		if(m[mid]==val)
		{
			f = 1;
		}
		else if (m[mid]<val)
		{
			start = mid+1;
		}
		else
		{
			end = mid-1;
		}
	}
	if(f==1)
	{
		cout<<"\nThe value is found.";
	}
	else
	{
		cout<<"The value is not found.";
	}
	getch();
}