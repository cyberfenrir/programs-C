#include<iostream.h>
#include<conio.h>
void withdef(int hisnum=30)
{
	for(int I=20; I<=hisnum; I+=5)
	{
		cout<<I<<",";
	}
	cout<<endl;
}

void control(int &mynum)
{
	mynum+=10;
	withdef(mynum);
}

void main()
{
	clrscr();
	int yournum = 20;
	control(yournum);
	withdef();
	cout<<"Number= "<<yournum<<endl;
	getch();
}