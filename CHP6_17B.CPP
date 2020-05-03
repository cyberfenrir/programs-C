#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int n;
   cout<<"Enter the number ofterms:";
   cin>>n;
   int sum = 0;
   int a=1,b=1;
   int i,c;
   for(i=3; i<=n; i++)
   {
      c = a+b;
      sum = sum+c;
      a=b;
      b=c;
   }
   cout<<sum;
   getch();
}
