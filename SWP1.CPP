#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int Arr[50], x, m, n, i, j, k, temp;
	cout<<"Enter an even number for the size of the array: ";
	cin>>n;
	for(i=0; i<n; i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>Arr[i];
	}
	x=n%2;
	if(x==0)
	{
		m=int(n/2);
		j=0,k=m;
		for(i=0; i<m; i++)
		{
			temp=Arr[j];
			Arr[j]=Arr[k];
			Arr[k]=temp;
			j++;
			k++;
		}
	}
	else
	{
		m=int(n/2);
		j=m,k=m;
		for(i=0; i<=m; i++)
		{
			temp=Arr[j];
			Arr[j]=Arr[k];
			Arr[k]=temp;
			j--;
			k++;
		}
	}
	cout<<"\nArray after swapping "<<endl;
	for(i=0; i<n; i++)
	{
		cout<<Arr[i]<< " ";
	}
	getch();
}