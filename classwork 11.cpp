#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
  int r,c,i,j;
  cout<<"Enter the no. of rows and columns"<<endl;
  cin>>r>>c;
  int *a=new int[r*c];
  int *colsum=new int[c];
  int *rowsum=new int[r];
  cout<<"Enter the array elements\n";
  for(i=0;i<r;i++)
  {
    rowsum[i]=0;
    for(j=0;j<c;j++)
    {
      cin>>a[i*c+j];
      rowsum[i]=rowsum[i]+a[i*c+j];
    }
  }
  for(j=0;j<c;j++)
  {
    colsum[j]=0;
    for(i=0;i<r;i++)
    {
      colsum[j]=colsum[j]+a[i*c+j];
    }
  }
  cout<<"\nThe no.s are\n";
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      cout<<a[i*c+j]<<"\t";
    }
    cout<<endl;
  }
  cout<<"\nRow sum:\n";
  for(i=0;i<r;i++)
  {
    cout<<"row "<<(i+1)<<": "<<rowsum[i]<<endl;
  }
  for(i=0;i<c;i++)
  {
    cout<<"column "<<(i+1)<<":"<<colsum[i]<<endl;
  }
  return 0;
}