#include<iostream.h>
#include<stdlib.h>
int main()
{
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=i;j++)
      {
	  cout<<"*";
      }
      cout<<"\n";
    }
     for(i=(n-1);i>=1;i--)
    {
      for(j=1;j<=i;j++)
      {
	  cout<<"*";
      }
      cout<<"\n";
    }
    return 0;
}