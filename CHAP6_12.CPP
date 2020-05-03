#include<iostream.h>
#include<conio.h>
void main()
{
     clrscr();
     int t;
     cout<<"Enter the number: ";
     cin>>t;
     int n = 0;
     int f = 0;
     int c = 0;
     int i, j, r, rev=0;
     for(i=1;i<=t;i++)
     {
	 if((t%i)==0)
	 {
	    c=c+1;
	 }
     )
     if(c==2)
     {
	  cout<<"\nThe number is prime.";
	  n=t;
	  while(n>0)
	  {
	     r = n%10;
	     rev = rev*10+r;
	     n = n/10;
	  }
	  cout<<rev;
	  for(j=1;j<=rev;j++)
	  {
	      if((rev%i)==0)
	      {
		  f++;
	      }
	  }
	  if(f==2)
	  {
	     cout<<"The number is twisted prime.";
	  }
	  else
	  {
	      cout<<"The number is not twisted prime.";
	  }
      }
      else
      {
	  cout<<"The number is not prime.";
      }
      getch();
}