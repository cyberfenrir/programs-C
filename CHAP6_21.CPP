#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int a=10,b=6,i;
   int p,q,r,s,m,t=0;
   char ch;
   int c = a-b;
   cout<<"Number of valid votes are: "<<b;
   cout<<"Number of invalid votes are: "<<c;
   for(i=1; i<=b; i++)
   {
      cout<<"Enter the choice of candidates:";
      cin>>m;
      if(ch == 'A')
      {
	  p++;
      }
      else if(ch == 'B')
      {
	  q++;
      }
      else if(ch == 'C')
      {
	  r++;
      }
      else if(ch == 'D')
      {
	  s++;
      }
      else if(ch == 'E')
      {
	  t++;
      }
      else
      {
	 cout<<"Unvalid input of choice of candidates!";
      }
   }
   cout<<"Number of votes Candidate A got are: "<<p;
   cout<<"Number of votes Candidate B got are: "<<q;
   cout<<"Number of votes Candidate C got are: "<<r;
   cout<<"Number of votes Candidate D got are: "<<s;
   cout<<"Number of votes Candidate E got are: "<<t;

   getch();
}