#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int i, m, n, j;
    int a[20][20];
    cout<<"Enter the number of rows:";
    cin>>m;
    cout<<"Enter the number of columns:";
    cin>>n;
    for(i=0;i<m;i++)
    {
       for(j=0; j<n; j++)
       {
	    cin>>a[i][j];
       }
       endl;
     }
     cout<<"The numbers of the matrix are:\n";
     for(i=0;i<m;i++)
    {
       for(j=0; j<n; j++)
       {
	    cout<<a[i][j]<<" ";
       }
       cout<<endl;
     }
     int t;
     for(i=0;i<m;i++)
     {
       for(j=0; j<n; j++)
       {
	    t = A[i][j];
	    A[i][j]=A[i][n-(j+1)];
	    a[i][n-(j+1)]=t;
       }
     }
     cout<<"The mirror image with respect to y-axis: \n";
     for(i=0;i<m;i++)
     {
       for(j=0; j<n; j++)
       {
	    cout<<a[i][j];
       }
     }
     getch();
}