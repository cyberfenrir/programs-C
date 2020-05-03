#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int n;
   cout<<"Enter the number ofterms:";
   cin>>n;
   double sum = 0;
   int b,c,i;
   int a=1,j=3;
   for(i=2; i<=(n*2); i+=2)
   {
      b = i*a;
      c=b/j;
      sum = sum+c;
      a = a*(-1);
      j = j+2;
   }
   cout<<sum;
   getch();
}