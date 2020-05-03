#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int n;
   cout<<"Enter the number ofterms:";
   cin>>n;
   int sum = 0;
   int j,a;
   int i;
   for(i=1; i<=n; i++)
   {
      a=0;
      for(j=1;j<=i;j++)
      {
	 a = a+j;
      }
      sum = sum+a;
   }
   cout<<sum;
   getch();
}