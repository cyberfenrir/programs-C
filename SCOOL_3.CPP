#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
 {
     clrscr();
     double a,b,c,r1,r2,d;
     cout<<"Enter the first number a:";
     cin>>a;
     cout<<"Enter the second number b:";
     cin>>b;
     cout<<"Enter the third number c:";
     cin>>c;
     if(a==0)
     {
	 cout<<"The value of \'a'\ should not be zero";
     }
     else
     {
	 d = (b*b - 4.0*a*c);
	 if(d>0)
	 {
	     r1 = (-b + sqrt(d))/(2.0*a);
	     r2 = (-b - sqrt(d))/(2.0*a);
	     cout<<"Roots are Real and Unequal.\n";
	     cout<<"First Root: "<<r1<<"\n";
	     cout<<"Second Root: "<<r2;
	 }
	 else if(d==0)
	 {
	     r1 = (-b/(2.0*a));
	     cout<<"Roots are Real and Equal.\n";
	     cout<<"First Root: "<<r1<<"\n";
	     cout<<"Second Root: "<<r1;
	 }
	 else
	 {
	      cout<<"Roots are Complex and Imaginary.\n";
	 }

    }
     getch();
 }