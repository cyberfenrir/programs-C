#include<iostream.h>
#include<conio.h>
void Tax(char*n, double i)
{
    double a;
    if((i>=0)&&(i<=50000))
    {
	 cout<<"The name is:"<<n;
	 cout<<"No Tax:";
    }
    else if((i>=50001)&&(i<=100000))
    {
	 cout<<"The name is:"<<n;
	 a = ((10*(i-50000))/100);
	 cout<<"The amount to be paid is:"<<a;
    }
    else if((i>=100001)&&(i<=150000))
    {
	 cout<<"The name is:"<<n;
	 a = (5000+((20*(i-100000))/100));
	 cout<<"The amount to be paid is:"<<a;
    }
    else if(i>150000)
    {
	 cout<<"The name is:"<<n;
	 a = (15000+((30*(i-150000))/100));
	 cout<<"The amount to be paid is:"<<a;
    }
    else
    {
	cout<<"Invalid input of annual income";
     }
}
void main()
{
	clrscr();
	char*n;
	double i;
	cout<<"Enter the name of the employee ";
	cin>>n;
	cout<<"Enter the annual income ";
	cin>>i;
	Tax(n,i);
	getch();
}