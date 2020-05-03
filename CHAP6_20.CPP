#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int m,i;
   double r=0,d=0;
   for(i=1; i<=5; i++)
   {
      cout<<"Enter the monthly sale:";
      cin>>m;
      if((m>0)&&(m<=10000))
      {
	 r = (5*m)/100;
	 d = (2*m)/100;
	 cout<<"Serial no.\t\tSale\t\tCommission of Representative\t\tCommission ofDistributor\n\t"<<i<<"\t\t"<<m<<"\t\t\t"<<r<<"\t\t\t\t\t"<<d;
      }
      else if((m>10000)&&(m<=20000))
      {
	 r = (8*m)/100;
	 d = (3*m)/100;
	 cout<<"Serial no.\t\tSale\t\tCommission of Representative\t\tCommission ofDistributor\n\t"<<i<<"\t\t"<<m<<"\t\t\t"<<r<<"\t\t\t\t\t"<<d;
      }
      else if((m>20000)&&(m<=30000))
      {
	 r = (10*m)/100;
	 d = (4*m)/100;
	 cout<<"Serial no.\t\tSale\t\tCommission of Representative\t\tCommission ofDistributor\n\t"<<i<<"\t\t"<<m<<"\t\t\t"<<r<<"\t\t\t\t\t"<<d;
      }
      else if(m>30000)
      {
	 r = (12*m)/100;
	 d = (5*m)/100;
	 cout<<"Serial no.\t\tSale\t\tCommission of Representative\t\tCommission ofDistributor\n\t"<<i<<"\t\t"<<m<<"\t\t\t"<<r<<"\t\t\t\t\t"<<d;
      }
      else
      {
	 cout<<"Invalid input of sale amount";
      }
   }
   getch();
}