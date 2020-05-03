#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[20][20];
	int m, n, i, j;
	cout<<"Enter the number of rows of the array: ";
	cin>>m;
	cout<<"Enter the number of columns of the array: ";
	cin>>n;
	cout<<"Enter the elements  of the 2-D array one by one:\n ";
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
		cout<<endl;
	}
	int p, f=0, k;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			p=a[i][j];
			for(k=1; k<=p; k++)
			{
				if((p%k)==0)
				{
					f++;
				}
			}
			if(f==2)
			{
				cout<<"The number "<<a[i][j]<<" is prime ";
			}
			f=0;
		}
		cout<<endl;
	}
	getch();
}