#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int i, j;
   for(i=7;i>=1;i-=2)
   {
      for(j=1; j<=i; j++)
      {
	  cout<<j<<" ";
      }
	  cout<<endl;
    }
    getch();
}