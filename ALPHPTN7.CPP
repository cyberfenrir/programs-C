#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i, j, n;
	char ch;
	cout<<"Enter the number of rows: ";
	cin>>n;
	cout<<endl;
	for(i=0; i<n; i++)
	{
		ch = 'A';
		for(j=0; j<=i; j++)
		{
			cout<<ch++;
		}
		cout<<endl;
	}
	getch();
}