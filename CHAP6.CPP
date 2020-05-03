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
	if((o>1)||(w>1)||(h>1)||(f>1)||(v>1)||(s>1)||(e>1)||(g>1)||(x>1)||(z>1))
	{
	    cout<<"It is not a unique number.";
	}
	else
	{
	    cout<<"It is a unique number.";
	}
	getch();
}
