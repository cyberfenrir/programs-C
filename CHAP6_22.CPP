#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   double da,hr,t,x,z,mtax,n,tax;
   int p,i;
   char*s = " ";
   for(i=1; i<=5; i++)
   {
      cout<<"Enter the names:";
      cin>>s;
      cout<<"Enter the monthly basic salary of the employees:";
      cin>>p;
      if(p>=1000)
      {
	 da = (40*p)/100;
	 hr = (30*p)/100;
	 t = p+da+hr;
	 x = (t*12);
      }
      else if((p>=5000)&&(p<10000))
      {
	 da = (40*p)/100;
	 hr = (25*p)/100;
	 t = p+da+hr;
	 x = (t*12);
      }
      else if((p>=2000)&&(p<5000))
      {
	 da = (30*p)/100;
	 hr = (20*p)/100;
	 t = p+da+hr;
	 x = (t*12);
      }
      else if((p>0)&&(p<2000))
      {
	 da = (30*p)/100;
	 hr = (15*p)/100;
	 t = p+da+hr;
	 x = (t*12);
      }
      else
      {
	 cout<<"Invalid input of choice of candidate!";
	 t=0;
	 x=(t*12);
      }
      if(x>50000)
      {
	 z = x-50000;
	 tax  = (30*z)/100;
	 mtax = tax/12;
	 n = t-mtax;
	 cout<<"Net monthly salary of the employee is:"<<n;
      }
      else
      {
	 n = t;
	 cout<<"Net monthly salary of the employee is:"<<n;
      }
    }
    getch();
}