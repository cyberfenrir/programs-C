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
   double sum = 0,m,div;
   int i,j=3;
   for(i=1; i<=n; i++)
   {
      m = a+i;
      div = m/j;
      sum = sum+div;
      j = j+2;
   }
   cout<<sum;
   getch();
}