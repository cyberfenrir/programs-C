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
   double sum = 0,m;
   int i;
   for(i=1; i<=n; i++)
   {
      m = a+i;
      sum = sum+m;
   }
   cout<<sum;
   getch();
}