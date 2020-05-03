#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n;
	cout<<" Enter the number of terms: ";
	cin>>n;
	int i;
	double sum = 0;
	double sq;
	for(i=1;i<=n;i++)
	{
	    sq = i*i;
	    sum = sum+sq;
	}
	cout<<"The sum is: "<<sum;
	getch();
}

