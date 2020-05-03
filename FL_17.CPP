#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int a;
    cout<<"Enter the number:";
    cin>>a;
    int d,c;
    for(c=a;c>0;)
    {
       d = c%10;
       c = c/10;
       cout<<d;
    }
    getch();
}