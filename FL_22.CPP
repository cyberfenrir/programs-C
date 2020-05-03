#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
      clrscr();
      int n;
      int c = 0;
      cout<<"Enter the number :";
      cin>>n;
      int a = n;
      while(a>0)
      {
	 c++;
	 a = a/10;
       }
      double x, y , z;
      x = n*n;
      y = pow(10,c);
      while(x>0)
      {
	   z = x%y;
	   x = x/y;
	   if(z==n)
	   {
		cout<<n<<"  is an Automorphic Number.";
	   }
	   else
	   {
		 cout<<a<<"  is not an Automorphic Number.";
	   }
	   break;
	}
       getch();
}
