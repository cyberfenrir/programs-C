#include<iostream.h>
#include<conio.h>
struct Coordinate{int x,y;};
void Show(Coordinate c)
{
     cout<<c.x<<"#"<<c.y<<endl;
}
void main()
{
     clrscr();
     Coordinate P= {25,16},Q,R;
     Q=P;
     Q.x+=10;
     R=Q;
     P.y-=5;
     P.x+=7;
     P.x-=5;
     Show(P);
     Show(Q);
     Show(R);
      getch();
}