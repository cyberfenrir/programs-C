#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i, x, n, k=0, c1=0, c2=0;
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(i=1; i<=n; i++)
	{
		for(x=1; x<=n-i; ++x)
		{
			cout<<" ";
			++c1;
		}
		while(k != (2*i-1))
		{
			if(c1<=n-1)
			{
				cout<<i+k<<" ";
				++c1;
			}
			else
			{
				++c2;
				cout<<i+k-2*c2<<" ";
			}
			++k;
		}
		c2 = c1 = k = 0;
		cout<<endl;
	}
	getch();
}