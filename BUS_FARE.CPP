#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double a;
	double b;
	cout<<"Enter the number of kilometers travelled: ";
	cin>>a;
	if((a>=0)&&(a<=10))
	{
		b =(a*5.0);
		cout<<"The bus fare is."<<b;
	}
	else if((a>=11)&&(a<=25))
	{
		b =(a*10.0);
		cout<<"The bus fare is."<<b;
	}
	else if((a>26)&&(a<=50))
	{
		b =(a*15.0);
		cout<<"The bus fare is."<<b;
	}
	else if(a>50)
	{
		b =(a*20.0);
		cout<<"The bus fare is."<<b;
	}
	else
	{
		cout<<"Invalid input of distance travelled.";
	}
	getch();
}