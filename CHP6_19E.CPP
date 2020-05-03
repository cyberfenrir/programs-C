#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int i,j=1,y=2;
   int a = 0;
   for(i=1; i<=5; i++)
   {
      for(j=1;j<=i;j++)
      {
	  cout<<i;
      }
      for(a=y;a<=5;a++)
      {
	  cout<<a;
      }
      y = y+1;
      cout<<"\n";
   }
   getch();
}