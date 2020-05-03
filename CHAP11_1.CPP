#include<iostream.h>
#include<conio.h>
void Prime(int x)
{
    int i,c;
    for(i=1; i<=x; i++)
    {
	if((x%i)==0)
	{
	    c++;
	 }
    }
    if(c==2)
    {
       cout<<"Prime";
    }
    else
    {
       cout<<"Not Prime";
    }
}
void main()
{
	clrscr();
	int x;
	cout<<"Enter the number ";
	cin>>x;
	Prime(x);
	getch();
}