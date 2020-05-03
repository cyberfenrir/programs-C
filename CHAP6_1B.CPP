#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
     clrscr();
     int n;
     cout<<"Enter the number of terms:";
     cin>>n;
     int i;
     double x;
     for(i=1;i<=10;i++)
     {
	 x = (pow(i,2))+1;
	 cout<<x<<"\n";
     }
     getch();
}
