#include<iostream.h>
#include<conio.h>
void merge(int a[], int b[], int c[], int m, int n)
{
	int i, j, k, p;
	k=0;
	i=m-1;
	j=n-1;
	while((i>=0) && (j>=0))
	{
		if(a[i]>=b[j])
		{
			c[k] = a[i];
			i--;
			k++;
		}
		else
		{
			c[k] = b[j];
			j--;
			k++;
		}
	}
	for(p=i; p>=0; p--)
	{
		c[k] = a[p];
		k++;
	}
	for(p=j; p>=0; p--)
	{
		c[k] = b[p];
		k++;
	}
	cout<<"The elements after merging and sorted in descending order are: \n";
	for(k=0; k<m+n; k++)
	{
		cout<<c[k]<<"\n";
	}
}

void main()
{
	clrscr();
	int m, n, i, j, a[20], b[20], c[40];
	cout<<"Enter number of elements for first array: ";
	cin>>m;
	cout<<"Enter the elements of first array in ascending order: \n";
	for(i=0; i<m; i++)
	{
		cin>>a[i];
	}
	cout<<"Enter number of elements for second array in ascending order: ";
	cin>>n;
	cout<<"Enter the elements of second array: \n";
	for(j=0; j<n; j++)
	{
		cin>>b[j];
	}
	merge(a, b, c, m, n);
	getch();
}