#include<iostream.h>
#include<conio.h>
void main()
 {
     clrscr();
     double cp;
     double sp;
     cout<<"Enter the selling price of the article:";
     cin>>sp;
     cout<<"Enter the cost price of the article:";
     cin>>cp;
     double d;
     if(cp<sp)
     {
	 d = (((sp-cp)/cp)*100.0);
	 cout<<"The profit percent is: "<<d;
     }
     else if(cp>sp)
     {
	 d = (((cp-sp)/cp)*100.0);
	 cout<<"The loss percent is: "<<d;
     }
     else
     {
	 cout<<"Thei is neither profit nor loss: ";
     }
     getch();
 }
