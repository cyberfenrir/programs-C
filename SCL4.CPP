#include<iostream.h>
#include<conio.h>
void array_multiply(int a[10][10], int b[10][10], int m, int n, int p, int q)
{
    int c[10][10],i,j,k;
    if(n==p)
      {
	 cout<<"Enter the elements of matrix A: \n";
	 for(i=0;i<m;i++)
	 {
	     for(j=0;j<n;j++)
	     {
		 cin>>a[i][j];
	     }
	 }
	 cout<<"Enter the elements of matrix B: \n";
	 for(i=0;i<p;i++)
	 {
	     for(j=0;j<q;j++)
	     {
		 cin>>b[i][j];
	     }
	 }
	 cout<<"Display matrix A:-";
	 for(i=0;i<m;i++)
	 {
	     cout<<endl;
	     for(j=0;j<n;j++)
	     {
		 cout<<a[i][j]<<" ";
	     }
	 }
	 cout<<"\nDisplay matrix B:-";
	 for(i=0;i<p;i++)
	 {
	     cout<<endl;
	     for(j=0;j<q;j++)
	     {
		 cout<<b[i][j]<<" ";
	     }
	 }
	 cout<<"\nThe array after multiplication:-";
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

}
void main()
{
      clrscr();
      int a[10][10], b[10][10], c[10][10],i,j,k,m,n,p,q;
      cout<<"Enter the row of matrix A: ";
      cin>>m;
      cout<<"Enter the column of matrix A: ";
      cin>>n;
      cout<<"Enter the row of matrix B: ";
      cin>>p;
      cout<<"Enter the column of matrix B: ";
      cin>>q;
      array_multiply(a,b,m,n,p,q);
     getch();
}