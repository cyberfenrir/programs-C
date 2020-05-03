#include<iostream.h>
#include<conio.h>
void main()
{
     clrscr();
     int n;
     cout<<"Enter the number: ";
     cin>>n;
     int a = -1;
     int b = 1;
     int c = 0;
     int i, flag=0;
     for(i=1;i<=n;i++)
     {
	 c = a+b;
	 cout<<c<<" ";
	 if(n==c)
	 {
	    flag++;
	    cout<<"\nThe number is present in the fibonacci series.";
	    break;
	 }
	 a=b;
	 b=c;
      }
      if(flag==0)
      {
	  cout<<"\nThe number is not present in the fibonacci series.";
      }
      getch();
}