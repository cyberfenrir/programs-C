#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int a;
    cout<<"Enter the number:";
    cin>>a;
    int d,n,sum = 0;
    for(n=a;n>0;)
    {
       d = n%10;
       sum = sum+d;
       n = n/10;
    }
    if(sum%10==0)
    {
	cout<<a<<"Is a magic number.";
    }
    else
    {
	cout<<a<<"Is not a magic number.";
    }
    getch();
}