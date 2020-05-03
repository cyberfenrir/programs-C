#include<iostream.h>
#include<conio.h>
void array_swap(int a[],int n)
{
   int temp,c,i,k;
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
}
void main()
{
	clrscr();
	int a[20],n,i;
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
	array_swap(a,n);
	getch();
}