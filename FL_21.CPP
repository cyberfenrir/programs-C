#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int a;
    cout<<"Enter the number:";
    cin>>a;
    int n,re,r = 0;
    for(n=a;n>0;)
    {
       r = n%10;
       re = re*10+r;
       n = n/10;
    }
    if(re==a)
    {
	cout<<a<<"Is a Palindrome number.";
    }
    else
    {
	cout<<a<<"Is not a Palindrome number.";
    }
    getch();
}