#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int X[5][5];
    int r,s,t,u,m,n,p,q;
    cout<<"Enter the number of rows of 1st array:";
    cin>>m;
    cout<<"Enter the number of columns of 1st array:";
    cin>>n;
    cout<<"Enter the elements of 1st array";
    for(r=0;r<m;r++)
    {
	for(s=0;s<n;s++)
	{
	   cin>>X[r][s];
	 }
	 cout<<endl;
     }
     int Y[5][5];
     cout<<"Enter the number of rows of 2nd array:";
    cin>>p;
    cout<<"Enter the number of columns of 2nd array:";
    cin>>q;
    cout<<"Enter the elements of 2nd array:";
    for(r=0;r<p;r++)
    {
	for(s=0;s<q;s++)
	{
	   cin>>Y[r][s];
	 }
	 cout<<endl;
     }
     if((n!=q)||(m!=p))
     {
	 cout<<"Matrices don't match.";
     }
     int rows = m = p;
     int cols = n = q;
     int res[5][5];
     cout<<"The sum is";
     int i, j;
     for(i=0; i<rows; i++)
     {
	for(j=0; j<cols; j++)
	{
	   cout<<X[i][j]+Y[i][j];
	}
	cout<<endl;
     }
     getch();
}