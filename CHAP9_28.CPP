#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[][20];
	int m, n, i, j;
	cout<<"Enter the number of stores of the array: ";
	cin>>m;
	cout<<"Enter the number of departments of the array: ";
	cin>>n;
	cout<<"Enter the monthly sale one by one:\n ";
	double sum = 0;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			cin>>a[i][j];
			sum = sum+a[i][j];
		}
		cout<<"The total monthly sale of a store is: "<<sum;
		sum=0;
		cout<<endl;
	}
	getch();
}