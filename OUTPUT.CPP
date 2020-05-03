#include<iostream.h>
#include<conio.h>
int &small(int &a, int &b)
{
	if(a<b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

void main()
{
	clrscr();
	int x = 5, y = 8;
	small(x, y)= -1;
	cout<<"x= "<< x <<" y= "<< y <<endl;
	small(y, x)= 6;
	cout<<"x= "<< x++ <<" y= "<< y-- <<endl;
	small(x, y)= 3;
	cout<<"x= "<< x <<" y= "<< y <<endl;
	getch();
}