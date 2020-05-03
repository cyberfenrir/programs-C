#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int n;
   cout<<"Enter the number ofterms:";
   cin>>n;
   int sum = 0;
   int a=1,b;
   int i;
   for(i=2; i<=(n*2); i+=2)
   {
      b = i*a;
      sum = sum+b;
      a=a*(-1);
   }
   cout<<sum;
   getch();
}