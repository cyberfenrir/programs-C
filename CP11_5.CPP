#include<iostream.h>
#include<conio.h>
void sqlarge(int a,int b)
{
    double s;
    if(a>b)
    {
       s=a*a;
       cout<<"The square of \'a\' is: "<<s;
    }
    else
    {
	s=b*b;
       cout<<"The square of \'b\' is: "<<s;
    }
}
void sum(int c)
{
  int a = c;
  int d;
  int sum=0;
  while(a>0)
  {
     d=a%10;
     sum = sum+d;
     a=a/10;
  }
  cout<<"The sum is: "<<sum;
}
void main()
{
	clrscr();
	int a,b,c;
	cout<<"\nEnter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	sqlarge(a,b);
	cout<<"Enter the a number: ";
	cin>>c;
	sum(c);
	getch();
}