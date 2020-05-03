#include<iostream.h>
#include<conio.h>
void triangle(int x,int y, int z)
{
    if((x==y)&&(y==z)&&(z==x))
    {
       cout<<"Equilateral Triangle";
    }
    else if((x!=y)&&(y!=z)&&(z!=x))
    {
       cout<<"Scalene Triangle";
    }
    else
    {
       cout<<"Isosceles Triangle";
    }
}
void main()
{
   int x,y,z;
   cout<<"Enter the first side of the triangle:";
   cin>>x;
   cout<<"Enter the second side of the triangle:";
   cin>>y;
   cout<<"Enter the third side of the triangle:";
   cin>>y;
   triangle(x,y,z);
   getch();
}