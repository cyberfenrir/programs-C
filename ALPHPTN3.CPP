#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i, j, n;
	char ch = 'A';
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(i=0; i<n; i++)
	{
		for(j=0; j<=i; j++)
		{
			cout<<ch++<<" ";
		}
		cout<<endl;
	}
	getch();
}