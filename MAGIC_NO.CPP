#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int num, num1, i, j, k, flag=0, n, sum=0, c=0;
	cout<<"Enter any number: ";
	cin>>num;
	num1=num;
	while(flag==0)
	{
		while(num!=0)
		{
			n=num%10;
			sum=sum+n;
			num=num/10;
			c++;
		}
		if(c==1)
		{
			if(sum==1)
			{
				cout<<num1<<" is a magic number";
			}
			else
			{
				 cout<<num1<<" is not a magic number";
			}
			flag=1;
		}
		num=sum;
		sum=0;c=0;
	}
	getch();
}