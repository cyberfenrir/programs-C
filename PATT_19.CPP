#include<iostream.h>
#include<stdlib.h>
int main()
{
    int x;
    cout<<"Enter the number of rows:";
    cin>>x;
    int i,j,d;
    for(i=1;i<=x;i++)
    {
      for(d=x-1;d>=i;d--)
      {
	 cout<<" ";
      }
      for(j=1;j<=i;j++)
      {
	  cout<<" "<<"*";
      }
      cout<<"\n";
    }
	return 0;
}