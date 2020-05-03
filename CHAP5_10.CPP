#include<iostream.h>
#include<conio.h>
void main()
 {
     clrscr();
     double c;
     cout<<"Enter the weigth of the parcel:";
     cin>>c;
     double a=c-1.0;
     double d;
     double b;
     if((c>0)&&(c<=1))
     {
	 b = 15.0;
	 cout<<"The amount to be paid is: "<<b;
     }
     else if(c>1)
     {
	 d = a/0.5;
	 b = (15.0+(d*8.0));
	 cout<<"The amount to be paid is: "<<b;
     }
     else
     {
	 cout<<"Invalid input: ";
     }
     getch();
 }

