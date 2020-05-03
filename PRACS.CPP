#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int i,sp;
    char j,m;
    char x = 'V';
    for(i=1; i<=5; i++)
    {
	for(sp=1; sp<i; sp++)
	{
	     cout<<" ";
	}
	for(j='Z'; j>=x; j--)
	{
	    cout<<j;
	}
	x++;
	for(m=x; m<='Z'; m++)
	{
	      cout<<m;
	}
	cout<<endl;
    }
    getch();
}