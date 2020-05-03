#include<iostream.h>
#include<conio.h>
#include<limits.h>
void print2greatest(int arr[], int arr_size)
{
	int i, first, second;
	if(arr_size<2)
	{
		cout<<"\n Invalid Input!";
		return;
	}
	first = second = INT_MIN;
	for(i=0; i<arr_size; i++)
	{
		if(arr[i]>first)
		{
			second=first;
			first=arr[i];
		}
		else if((arr[i]>second) && (arr[i]!=first))
		{
			second=arr[i];
		}
	}
	if(second==INT_MIN)
	{
		cout<<"There is no second greatest element.";
	}
	else
	{
		cout<<"The greatest element and the second greatest element are: "<<first<<" and "<<second;
	}
}

void main()
{
	clrscr();
	int arr[] = {12, 13, 1, 10, 34, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	print2greatest(arr, n);
	getch();
}