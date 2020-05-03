#include<iostream.h>
#include<stdlib.h>
int main()
{
    int x;
    cout<<"Enter the number of rows:";
    cin>>x;
    int i,j;
    int z=1;
    for(i=x;i>=1;i--)
    {
      for(j=x;j>z;j--)
      {
	  cout<<"  "<<j;
      }
      cout<<"\n";
      z = z+1;
    }
    return 0;
}