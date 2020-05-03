#include<iostream.h>
#include<conio.h>
void main()
{
     clrscr();
     int n;
     cout<<"Enter the number :";
     cin>>n;
     int i;
     int pro = 1;
     for(i=1;i<=n;i++)
     {
	 pro = pro*i;
     }
     cout<<"The factorial of the number: "<<pro;
     getch();
}
