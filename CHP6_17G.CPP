#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int n;
   cout<<"Enter the number ofterms:";
   cin>>n;
   int sum = 0;
   int j;
   int i,pro;
   for(i=1; i<=n; i++)
   {
      pro=1;
      for(j=1;j<=i;j++)
      {
	 pro = pro*j;
      }
      sum = sum+pro;
   }
   cout<<sum;
   getch();
}