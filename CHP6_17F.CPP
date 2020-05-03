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
   int i,p;
   for(i=2; i<=n; i++)
   {
      p=1;
      for(j=1;j<=i;j++)
      {
	 p = p*j;
      }
      sum = sum+a+p;
      a++;
   }
   cout<<sum;
   getch();
}