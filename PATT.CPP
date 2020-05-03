#include<iostream.h>
#include<conio.h>
void main()
{
     clrscr();
    int a = 1,l=1;
    int i, j;
    for(i=1;i<=4;i++)
    {
	a = l;
	for(j=1;j<=5;j++)
	{
	    cout<<a<<" ";
	    a=a+2;
	}
	l = l+2;
	cout<<"\n";
    }
    getch();
}