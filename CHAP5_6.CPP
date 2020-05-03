 #include<iostream.h>
 #include<conio.h>
 #include<math.h>
 void main()
 {
     clrscr();
     int d;
     cout<<"Enter a number: ";
     cin>>d;
     double a = sin(d);
     double b = cos(d);
     double c = tan(d);
     if((a<b)&&(a<c))
     {
	 cout<<"The lowest Trigonometrical value is: "<<a;
     }
     else if((b<a)&&(b<c))
     {
	 cout<<"The lowest Trigonometrical value is: "<<b;
     }
     else
     {
	 cout<<"The lowest Trigonometrical value is: "<<c;
     }
     getch();
  }


