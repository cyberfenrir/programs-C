#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int x;
    cout<<"Enter the number of rows:";
    cin>>x;
    int i,j;
    for(i=x;i>=1;i--)
    {
      for(j=i;j<=x;j++)
      {
	  cout<<i;
      }
      cout<<"\n";
    }
    getch();
}