#include<iostream.h>
#include<conio.h>
void print_sum(int a[20][20],int m, int n)
{
     int i, j, sum=0;
     if(m==n)
     {
	 for(i=0;i<m;i++)
	 {
	     for(j=0; j<m; j++)
	     {
		   if((i==j)&&((a[i][j]%5)==0))
		   {
		       sum = sum + a[i][j];
		   }
		   else if((j==m-(i+1))&&((a[i][j]%5)==0))
		   {
			sum = sum+a[i][j];
		   }
	      }
	  }
      }
     cout<<"Sum of the diagonal elements of the matrix is: "<<sum;
}
void main()
{
    clrscr();
    int i, m, n, j, sum=0;
    int a[20][20];
    cout<<"Enter the number of rows:";
    cin>>m;
    cout<<"Enter the number of columns:";
    cin>>n;
    cout<<"Enter the elements of array:\n";
    for(i=0;i<m;i++)
    {
       for(j=0; j<n; j++)
       {
	    cin>>a[i][j];
       }
       endl;
     }
      cout<<"The elements of the the matrix are:\n";
     for(i=0;i<m;i++)
    {
       for(j=0; j<n; j++)
       {
	    cout<<a[i][j]<<" ";
       }
       cout<<endl;
     }
     print_sum(a,m,n);
     getch();
}