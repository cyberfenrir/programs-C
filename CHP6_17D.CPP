#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int n;
   cout<<"Enter the number ofterms:";
   cin>>n;
   int sum = 0;
   int pro;
   int i;
   for(i=1; i<=n; i++)
   {
      pro = i*(i+1);
      sum = sum+pro;
   }
   cout<<sum;
   getch();
}