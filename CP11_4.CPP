#include<iostream.h>
#include<conio.h>
void smallo(int a,int b)
{
    if(a<b)
    {
       cout<<"The value of \'a\' is: "<<0;
    }
    else
    {
	cout<<"The value of \'b\' is: "<<0;
    }
}
void main()
{
	clrscr();
	int a,b;
	cout<<"Enter the first element :";
	cin>>a;
	cout<<"Enter the second element :";
	cin>>b;
	smallo(a,b);
	getch();
}