#include<iostream.h>
#include<stdlib.h>
int main()
{
	int a[10], n, i, max;
	cout<<"How many elements do you want to enter: ";
	cin>>n;
	cout<<"Enter the numbers: \n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	max = a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
	}
	cout<<"The largest element is: "<<max;
	return 0;
}