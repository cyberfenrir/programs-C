#include<iostream.h>
#include<stdlib.h>
int main()
{
    int x;
    cout<<"Enter double the number of rows:";
    cin>>x;
    int i,j,d;
    for(i=1;i<=x;i=i+2)
    {
      for(d=x-1;d>=i;d--)
      {
	 cout<<" ";
      }
      for(j=1;j<=i;j++)
      {
	  if((j%2)!=0)
	  {
		cout<<" "<<"2";
	  }
	  else
	  {
		cout<<" "<<"1";
	  }
      }
      cout<<endl;
    }
    return 0;
}