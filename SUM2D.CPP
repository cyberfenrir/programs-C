#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int i, m, n, j, ld, rd, k;
    int a[20][20],b[20][20],c[20][20];
    cout<<"Enter the number of rows:";
    cin>>m;
    cout<<"Enter the number of columns:";
    cin>>n;
    cout<<"Enter the elements of 1st array:\n";
    for(i=0;i<m;i++)
    {
       for(j=0; j<n; j++)
       {
	    cin>>a[i][j];
       }
       endl;
     }
     cout<<"Enter the elements of 2nd array:\n";
    for(i=0;i<m;i++)
    {
       for(j=0; j<n; j++)
       {
	    cin>>b[i][j];
       }
       endl;
     }
     cout<<"The numbers of the 1st matrix are:\n";
     for(i=0;i<m;i++)
    {
       for(j=0; j<n; j++)
       {
	    cout<<a[i][j]<<" ";
       }
       cout<<endl;
     }
     cout<<"The numbers of the 2nd matrix are:\n";
     for(i=0;i<m;i++)
    {
       for(j=0; j<n; j++)
       {
	    cout<<b[i][j]<<" ";
       }
       cout<<endl;
     }
     for(i=0;i<m;i++)
     {
	for(j=0; j<n; j++)
       {
	    c[i][j]=a[i][j]+b[i][j];
       }
       cout<<endl;
     }
     cout<<"Sum of the matrices is:";
     for(i=0;i<m;i++)
     {
       for(j=0; j<n; j++)
       {
	    cout<<c[i][j]<<" ";
       }
       cout<<endl;
     }
     getch();
}