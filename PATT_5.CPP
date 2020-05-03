#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int x;
    cout<<"Enter the number of rows:";
    cin>>x;
    int i,j;
    for(i=1;i<=x;i++)
    {
      for(j=1;j<=i;j++)
      {
	  cout<<j;
      }
      cout<<"\n";
    }
    getch();
}