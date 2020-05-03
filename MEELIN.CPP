#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
     clrscr();
     int n,x;
     cout<<" Enter the number of terms :";
     cin>>n;
     cout<<" Enter a number ";
     cin>>x;
     int i,j,p;
     double a, sum,b;
     for(i=1;i<=n;i++)
     {
	p=1;
	for(j=1;j<=i;j++)
	{
	    p = p*j;
	}
	b = pow(x,j);
	a = b/p;
	sum = sum+x;
	a = a*(-1);
     }
   cout<<" The sum of the series is :"<<(sum+1);
   getch();
}

