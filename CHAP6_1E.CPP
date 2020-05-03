#include<iostream.h>
#include<conio.h>
void main()
{
     clrscr();
     int n;
     cout<<"Enter the number of terms:";
     cin>>n;
     int i,j;
     int x;
     for(i=1;i<=n;i++)
     {
	 x = 0;
	 for(j=1;j<=i;j++)
	 {
	     x = j+(10*x);
	 }
	 cout<<x<<"\n";
     }
     getch();
}
