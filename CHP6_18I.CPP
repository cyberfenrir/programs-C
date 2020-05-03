#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
   clrscr();
   int n,a;
   cout<<"Enter the number ofterms:";
   cin>>n;
   cout<<"Enter the number:";
   cin>>a;
   double sum = 0,m,div;
   int i;
   for(i=1; i<=n; i++)
   {
      m = pow(a,i);
      div = i/m;
      sum = sum+div;
   }
   cout<<sum;
   getch();
}