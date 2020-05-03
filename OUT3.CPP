#include<conio.h>
#include<iostream.h>
void main()
{
   clrscr();
   int n;
   cout<<"Enter the no. ";
   cin>>n;
   int i,c,j,k;
   c = n-1;
   for(i=1;i<=n;i++)
   {
	for(k=c;k>=1;k--)
	{
	     cout<<" ";
	 }
	 for(j=1;j<=i;j++)
	 {
	       cout<<"*";
	 }
	 for(j=i-1; j>=1; j--)
	 {
	       cout<<"*";
	 }
	 cout<<endl;
	 c = c-1;
     }
     c=c+2;
     for(i=n-1;i>=1;i--)
   {
	for(k=1;k<=c;k++)
	{
	     cout<<" ";
	 }
	 for(j=1;j<=i;j++)
	 {
	       cout<<"*";
	 }
	 for(j=i-1; j>=1; j--)
	 {
	       cout<<"*";
	 }
	 cout<<endl;
	 c = c+1;
     }
     getch();
}