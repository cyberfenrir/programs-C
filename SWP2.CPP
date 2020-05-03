#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int Arr[50], x, y, z, m, n, i, j, k, temp;
	cout<<"Enter an even number for the size of the array: ";
	cin>>n;
	for(i=0; i<n; i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>Arr[i];
	}
	m=int(n/2);
	z=m%2;
	cout<<m;
	cout<<"\n"<<z;
	j=m,k=m;
	if(z==0)
	{
		for(i=0; i<=m; i++)
		{
			x=j%2;
			cout<<"\n"<<x;
			y=k%2;
			cout<<"\n"<<y;
			if((x==0) && (y!=0))
			{
				temp=Arr[j];
				Arr[j]=Arr[k];
				Arr[k]=temp;
				j++;
				k++;
			}
			else if((x!=0) && (y==0))
			{
				temp=Arr[j];
				Arr[j]=Arr[k];
				Arr[k]=temp;
				j++;
				k++;
			}
			else if(j==k)
			{
				temp=Arr[j];
				Arr[j]=Arr[k];
				Arr[k]=temp;
				j=0;
				k++;
			}
		}
	}
	else
	if(z!=0)
	{
		for(i=0; i<=m; i++)
		{
			x=j%2;
			cout<<"\n"<<x;
			y=k%2;
			cout<<"\n"<<y;
			if((x==0) && (y==0))
			{
				temp=Arr[j];
				Arr[j]=Arr[k];
				Arr[k]=temp;
				j++;
				k++;
			}
			else if((x!=0) && (y!=0))
			{
				temp=Arr[j];
				Arr[j]=Arr[k];
				Arr[k]=temp;
				j++;
				k++;
			}
			else if(j==k)
			{
				temp=Arr[j];
				Arr[j]=Arr[k];
				Arr[k]=temp;
				j=0;
				k++;
			}
		}
	}
	cout<<"\nArray after swapping "<<endl;
	for(i=0; i<n; i++)
	{
		cout<<Arr[i]<< " ";
	}
	getch();
}