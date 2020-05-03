#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i, j, k, n;
	char ch = 'A';
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(i=0; i<=n; i++)
	{
		for(j=0; j<=i; j++)
		{
			cout<<" ";
		}
		for(k=(n-i-1); k>=0; k--)
		{
			cout<<ch;
		}
		ch++;
		cout<<endl;
	}
	getch();
}