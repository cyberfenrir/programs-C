#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n;
	int sum1, sum2, sum3 = 0;
	do
	{
	     cout<<"Enter the number: ";
	     cin>>n;
	     if(n<0)
	     {
	       sum1 = sum1+n;
	     }
	     else if ((n>0)&&(n%2)!=0)
	     {
		sum2 = sum2+n;
	     }
	     else if ((n>0)&&(n%2)==0)
	     {
		sum3 = sum3+n;
	     }
	 }while(n!=0);
	 cout<<"The sum of the negative numbers is:"<<sum1;
	 cout<<"The sum of the negative numbers is:"<<sum1;
	 cout<<"The sum of the negative numbers is:"<<sum1;
	 getch();

}




