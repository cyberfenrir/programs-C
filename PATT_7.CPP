#include<iostream.h>
#include<stdlib.h>
int main()
{
    int x;
    cout<<"Enter the number of rows:";
    cin>>x;
    int i,j;
    for(i=1;i<=x;i++)
    {
      for(j=1;j<=i;j++)
      {
	  cout<<" "<<j;
      }
      cout<<"\n";
    }
    for(i=x-1;i>=1;i--)
    {
      for(j=1;j<=i;j++)
      {
	  cout<<" "<<j;
      }
      cout<<"\n";
    }
    return 0;
}