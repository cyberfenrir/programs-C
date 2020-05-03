#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int x;
    cout<<"Enter the number of rows:";
    cin>>x;
    int i,j,d;
    for(i=x;i>=1;i--)
    {
      for(d=x-1;d>=i;d--)
      {
	 cout<<" ";
      }
      for(j=i;j>=1;j--)
      {
	  cout<<" "<<j;
      }
      cout<<"\n";
    }
    getch();
}