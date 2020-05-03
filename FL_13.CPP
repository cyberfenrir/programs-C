#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,m;
	int x,y,n;
	cout<<"Enter the first number: ";
	cin>>n;
	cout<<"Enter the second number: ";
	cin>>m;
	for(x=1; x<=m; x++)
	{
	    if(m%x==0)
	    {
	      i++;
	    }
	}
	int j = 0;
	for(y=1; y<=n; y++)
	{
	       if(n%y==0)
	       {
		  j++;
	       }
	}
	int z;
	if ((i==2)&&(j==2)&&(m<n))
	{
	   z = n-m;
	   if(z==2)
	   {
		cout<<"The number are twin prime ";
	   }
	   else
	   {
		cout<<"The number are not twin prime ";
	   }
	 }
	 else
	 {
		cout<<"The number are not twin prime ";
	 }
	getch();
}