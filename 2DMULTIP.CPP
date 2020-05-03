#include<iostream.h>
#include<stdlib.h>
int main()
{
      int a[10][10], b[10][10], c[10][10],i,j,k,m,n,p,q;
      cout<<"Enter the row and column:";
      cin>>m>>n>>p>>q;
      if(n==p)
      {
	 cout<<"Enter the elements of matrix A";
	 for(i=0;i<m;i++)
	 {
	     for(j=0;j<n;j++)
	     {
		 cin>>a[i][j];
	     }
	 }
	 cout<<"Enter the elements of matrix B";
	 for(i=0;i<p;i++)
	 {
	     for(j=0;j<q;j++)
	     {
		 cin>>b[i][j];
	     }
	 }
	 cout<<"Display matrix A";
	 for(i=0;i<m;i++)
	 {
	     cout<<endl;
	     for(j=0;j<n;j++)
	     {
		 cout<<a[i][j]<<" ";
	     }
	 }
	 cout<<"Display matrix B";
	 for(i=0;i<p;i++)
	 {
	     cout<<endl;
	     for(j=0;j<q;j++)
	     {
		 cout<<b[i][j];
	     }
	 }
	 for(i=0; i<m; i++)
	 {
	    cout<<endl;
	    for(j=0; j<q; j++)
	    {
	       c[i][j]=0;
	       for(k=0; k<n; k++)
	       {
		  c[i][j]=c[i][j]+a[i][k]*b[k][j];
	       }
	       cout<<c[i][j]<<" ";
	    }
	 }
     }
     else
     {
	cout<<"Matrix cannot be multiplied ";
     }
     return 0;
}