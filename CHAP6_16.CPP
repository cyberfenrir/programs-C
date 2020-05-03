#include<iostream.h>
#include<conio.h>
void main()
{
     clrscr();
     int t;
     cout<<"Enter the number: ";
     cin>>t;
     int c,d=0;
     c=t;
     while(c>0)
     {
	 d = c%10;
	 if(d==0)
	 {
	    cout<<"\nIt is a duck number ";
	    break;
	 }
	 c = c/10;
     )
     if(d!=0)
     {
       cout<<"\nIt is not a duck number ";
     }
     getch();
}