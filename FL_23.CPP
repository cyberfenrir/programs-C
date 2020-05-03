#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int a;
    cout<<"Enter the number:";
    cin>>a;
    int n,rev,r = 0;
    for(n=a;n>0;)
    {
       r = n%10;
       rev = rev*10+r;
       n = n/10;
    }
    cout<<"The reversed number is:"<<rev;
    getch();
}