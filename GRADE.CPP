#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double a;
	cout<<"Enter the marks of the student: ";
	cin>>a;
	if((a>80)&&(a<=100))
	{
		cout<<"Honours.";
	}
	else if((a>60)&&(a<=80))
	{
		cout<<"First Division.";
	}
	else if((a>50)&&(a<=60))
	{
		cout<<"Second Division.";
	}
	else if((a>40)&&(a<=50))
	{
		cout<<"Third Division.";
	}
	else if(a<40)
	{
		cout<<"Failed!";
	}
	else
	{
		cout<<"Invalid input of marks.";
	}
	getch();
}