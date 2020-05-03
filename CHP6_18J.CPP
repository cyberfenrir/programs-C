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
   double sum = 0,x,y;
   int i,j=1,k=1;
   for(i=1; i<=n; i++)
   {
      y = pow(a,k);
      x = y/j;
      sum = sum+x;
      k+=2;
      j+=4;
      a = a*(-1);
   }
   cout<<sum;
   getch();
}