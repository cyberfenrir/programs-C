#include<iostream.h>
#include<conio.h>
void Merge(int A[10], int B[10], int m, int n)
{
	int C[20], i=0, j=0, k=0;
	while((i<m) && (j<n))
	{
		if(A[i]<=B[j])
		{
			C[k]=A[i];
			i++;
		}
		else
		{
			C[k]=B[j];
			j++;
		}
		k++;
	}
	if(i==m)
	{
		for(int x=j; x<m; x++)
		{
			C[k]=A[x];
			k++;
		}
	}
	if(j==n)
	{
		for(int x=i; x<n; x++)
		{
			C[k]=B[x];
			k++;
		}
	}
	cout<<"Display the merged array in ascending order: \n";
	for(int y=0; y<k; y++)
	{
		cout<<C[k];
	}
}

void main()
{
	clrscr();
	int A[10], B[10], m, n, i;
	cout<<"Enter the number of elements of first array: ";
	cin>>m;
	cout<<"Enter the elements of first array in ascending order: \n";
	for(i=0; i<m; i++)
	{
		cin>>A[i];
	}
	cout<<"Enter the number of elements of second array: ";
	cin>>n;
	cout<<"Enter the elements of second array in ascending order: \n";
	for(i=0; i<n; i++)
	{
		cin>>B[i];
	}
	Merge(A, B, m, n);
	getch();
}