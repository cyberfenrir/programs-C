#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    int i,j;
    for(i=n;i>=1;i--)
    {
      for(j=1;j<=i;j++)
      {
	  cout<<"*";
      }
      cout<<"\n";
    }
     for(i=2;i<=n;i++)
    {
      for(j=1;j<=i;j++)
      {
	  cout<<"*";
      }
      cout<<"\n";
    }
    getch();
}