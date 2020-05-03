#include<iostream.h>
#include<conio.h>
void main()
{
     clrscr();
     int n;
     cout<<"Enter the number of terms:";
     cin>>n;
     int b, i;
     int a = 1;
     for(i=1;i<=(n*2);i=i+2)
     {
	 b = i*a;
	 cout<<b<<"\n";
	 a=a*(-1);
     }
     getch();
}

