#include<iostream.h>
#include<conio.h>
void main()
{
      clrscr();
      int a;
      int d,e;
      int sum = 0;
      cout<<"Enter the number :";
      cin>>a;
      int n = a;
      while(n>0)
      {
	   d = n%10;
	   e = d*d*d;
	   n = n/10;
	   sum = sum+e;
       }
       if(sum==a)
       {
	    cout<<a<<"  is an Armstrong Number.";
       }
       else
       {
	    cout<<a<<"  is not an Armstrong Number.";
       }
       getch();
}

