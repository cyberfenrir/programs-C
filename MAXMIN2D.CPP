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
     int min = a[0][0];
     int max = a[0][0];
     for(i=0;i<m;i++)
    {
       for(j=0; j<n; j++)
       {
	    if(min>a[i][j])
	    {
		min = a[i][j];
	    }
	    if(max<a[i][j])
	    {
		max = a[i][j];
	    }
       }
     }
    cout<<"The lowest number in the array is:"<<min<<"\n";
    cout<<"The lowest number in the array is:"<<max;
    getch();
}