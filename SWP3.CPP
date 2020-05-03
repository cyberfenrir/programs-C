#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int Arr[50], a, x, y, z, m, n, i, j, k, temp;
	cout<<"Enter the size of the array: ";
	cin>>n;
	for(i=0; i<n; i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>Arr[i];
	}
	a=n%2;
	if(a==0)
	{
		m=n/2;
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
		m=n/2;
		z=m%2;
		j=m,k=m;
		if(z==0)
		{
			for(i=0; i<=m; i++)
			{
				x=j%2;
				y=k%2;
				if((x==0) && (y==0) && (j==k))
				{
					temp=Arr[j];
					Arr[j]=Arr[k];
					Arr[k]=temp;
					j=0;
					k++;
				}

				else if((x==0) && (y!=0))
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
			}
		}
		else
		{
			for(i=0; i<=m; i++)
			{
				x=j%2;
				y=k%2;
				if((x!=0) && (y!=0) && (j==k))
				{
					temp=Arr[j];
					Arr[j]=Arr[k];
					Arr[k]=temp;
					j=0;
					k++;
				}
				else if((x==0) && (y==0))
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