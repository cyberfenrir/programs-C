#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
   clrscr();
   int n;
   int a;
   cout<<"Enter the number ofterms:";
   cin>>n;
   cout<<"Enter the number: ";
   cin>>a;
   double sum = 0,m,pro;
   int i,j;

   for(i=1; i<=n; i++)
   {
      pro = 1;
      for(j=1;j<=i;j++)
      {
	  pro = pro*j;
      }
      m = a/pro;
      sum = sum+m;
   }
   cout<<sum;
   getch();
}