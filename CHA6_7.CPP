#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n;
	int sum1, sum2 = 0;
	cout<<"Enter the number: ";
	cin>>n;
	int i;
	for(i=1;i<=n;i++)
	{
	   if((n>0)&&((i%2)==0))
	   {
		sum1 = sum1+i;
	   }
	   else if ((n>0)&&(n%2)!=0)
	   {
		sum2 = sum2+i;
	   }
	}
	cout<<"The sum of the even numbers is:"<<sum1;
	cout<<"The sum of the odd numbers is:"<<sum1;
	getch();
}


