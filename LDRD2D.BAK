#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int i, m, n, j, ld, rd, k;
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
     for(i=0;i<m;i++)
     {
	ld = ld+a[i][i];
     }
     k = m-1;
     cout<<"Sum of left diagonal elements is :"<<ld;
     for(i=0;i<m;i++)
     {
       rd = rd+a[i][k];
       k--;
     }
     cout<<"Sum of right diagonal elements is :"<<rd;
     getch();
}