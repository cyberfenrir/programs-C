#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int n,a;
   cout<<"Enter the number ofterms:";
   cin>>n;
   cout<<"Enter the number:";
   cin>>a;
   double sum = 0,x;
   int i;
   for(i=1; i<=n; i+=2)
   {
      if((i%2)!=0)
      {
	 x = i;
	 sum = sum+i;
      }
      else
      {
	  x = ((a*(-1))/i);
	  sum = sum+x;
      }
   }
   cout<<sum;
   getch();
}