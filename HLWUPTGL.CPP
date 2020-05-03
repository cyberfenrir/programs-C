#include<iostream.h>
#include<stdlib.h>
int main()
{
	cout<<"\"Hollow Upright Triangle Shape\"\n\n";
	int n, i, j, k, z=1;
	cout<<"Enter the number rows: ";
	cin>>n;
	for(i=0; i<n; i++)
	{
		for(j=n; j>i; j--)
		{
			cout<<" ";
		}
		cout<<"&";
		if(i!=0)
		{
			for(k=1; k<=z; k++)
			{
				cout<<" ";
			}
			cout<<"&";
			z+=2;
		}
		cout<<endl;
	}
	for(i=0; i<=z+1; i++)
	{
		cout<<"&";
	}
	cout<<"\n";
	return 0;
}