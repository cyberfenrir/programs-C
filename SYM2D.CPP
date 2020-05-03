#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int i, m, n, j,k=0;
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
       for(j=0; j<n; j++)
       {
	    if(a[i][j]!=a[j][i])
	    {
		k++;
	    }
	}
     }
    if(k==0)
    {
	cout<<"It is symmetric.";
    }
    else
    {
       cout<<"It is not symmetric.";
    }
    getch();
}