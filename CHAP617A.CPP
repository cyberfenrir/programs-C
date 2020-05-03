#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int n;
   cout<<"Enter the number ofterms:";
   cin>>n;
   int sum = 0;
   int x;
   int i;
   for(i=9; i>=n; i--)
   {
      x = i+((i*10)+9);
      sum = sum+x;
   }
   cout<<"The sum of the series is:"<<sum;
   getch();
}
