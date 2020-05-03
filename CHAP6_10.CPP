#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int t;
	cout<<"Enter the number: ";
	cin>>t;
	int d=0,c=0,w=0,o=0,h=0,f=0,v=0,s=0,e=0,g=0,x=0,z = 0;
	c = t;
	while(c>0)
	{
	   d = c%10;
	   if(d==1)
	   {
	      o++;
	   }
	   else if(d==2)
	   {
	      w++;
	   }
	   else if(d==3)
	   {
	      h++;
	   }
	   else if(d==4)
	   {
	      f++;
	   }
	   else if(d==5)
	   {
	     v++;
	   }
	   else if(d==6)
	   {
	      s++;
	   }
	   else if(d==7)
	   {
	      e++;
	   }
	   else if(d==8)
	   {
	     g++;
	   }
	   else if(d==9)
	   {
	      x++;
	   }
	   else
	   {
	      z++;
	   }
	   c = c/10;
	}
	cout<<"The frequency of 0 is "<<z<<"\n";
	cout<<"The frequency of 1 is "<<o<<"\n";
	cout<<"The frequency of 2 is "<<w<<"\n";
	cout<<"The frequency of 3 is "<<h<<"\n";
	cout<<"The frequency of 4 is "<<f<<"\n";
	cout<<"The frequency of 5 is "<<v<<"\n";
	cout<<"The frequency of 6 is "<<s<<"\n";
	cout<<"The frequency of 7 is "<<e<<"\n";
	cout<<"The frequency of 8 is "<<g<<"\n";
	cout<<"The frequency of 9 is "<<x<<"\n";
	getch();
}