#include<iostream.h>
#include<conio.h>
void main()
{
      clrscr();
      int b,a;
      int c = 0;
      int d = 0;
      int e = 0;
      cout<<"Enter the number :";
      cin>>a;
      int g = a;
      while(g>0)
      {
	   c = g%10;
	   g = g/10;
	   b = 1;
	   d = c;
	   while(d>0)
	   {
	      b = b*d;
	      d--;
	   }
	   e = e+b;
       }
       if(e==a)
       {
	    cout<<a<<"  is a Special Number.";
       }
       else
       {
	    cout<<a<<"  is not a Special Number.";
       }
       getch();
}

