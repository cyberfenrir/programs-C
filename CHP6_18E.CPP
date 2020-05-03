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
   int i,j,p;
   for(i=2; i<=n; i++)
   {
      p=1;
      for(j=1;j<=i;j++)
      {
	  p=p*j;
      }
      x = a/p;
      sum = sum+x;
      a=a*(-1);
   }
   cout<<sum;
   getch();
}