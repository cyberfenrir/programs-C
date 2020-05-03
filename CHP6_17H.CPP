#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int n;
   cout<<"Enter the number ofterms:";
   cin>>n;
   int sum = 0;
   int div;
   int i;
   for(i=1; i<=n; i++)
   {
      div=i/(i+1);
      sum = sum+div;
   }
   cout<<sum;
   getch();
}