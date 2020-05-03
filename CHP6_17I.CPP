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
   int i=1,j;
   for(j=1; j<=n; j++)
   {
      div=i/(j*j);
      sum = sum+div;
      i = i+2;
   }
   cout<<sum;
   getch();
}