#include<iostream.h>
#include<conio.h>
void main()
{
     clrscr();
     int m,n;
     cout<<"Enter first number: ";
     cin>>m;
     cout<<"Enter second number: ";
     cin>>n;
     int i, x, y;
     for(x=1;x<=m;x++)
     {
	 if(m%x==0)
	 {
	    i++;
	 }
     )
     int j = 0;
     for(y=1;y<=n;y++)
     {
	if(n%y==0)
	 {
	    j++;
	 }
     )
     int z;
     if((i==2)&&(j==2)&&(m<n))
     {
	  z = n-m;
	  if(z==2)
	  {
	      cout<<"\nThe number are twin prime.";
	  }
	  else
	  {
	      cout<<"\nThe number are not twin prime.";
	  }
      }
      else if((i==2)&&(j==2)&&(m>n))
      {
	  z = m-n;
	  if(z==2)
	  {
	      cout<<"\nThe number are twin prime.";
	  }
	  else
	  {
	      cout<<"\nThe number are not twin prime.";
	  }
       }

	  else
	  {
	      cout<<"The number is not twisted prime.";
	  }
      }
      else
      {
	  cout<<"The number are not twin prime.";
      }
      getch();
}