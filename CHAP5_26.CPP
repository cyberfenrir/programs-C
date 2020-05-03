#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double bp;
	double da,sa,gs;
	cout<<"Enter the basic pay: ";
	cin>>bp;
	if((bp>=0)&&(bp<=10000))
	{
		da = ((10.0*bp)/100.0);
		sa = ((8.0*bp)/100.0);
		gs = bp+da+sa;
		cout<<"Basic \t\t DA \t\t Spl. Allowance \t\t Gross Salary \n"<<bp<<"\t\t"<<da<<"\t\t\t"<<sa<<"\t\t\t"<<gs;
	}
	else if((bp>=10001)&&(bp<=20000))
	{
		da = ((12.0*bp)/100.0);
		sa = ((8.0*bp)/100.0);
		gs = bp+da+sa;
		cout<<"Basic \t\t DA \t\t Spl. Allowance \t\t Gross Salary \n"<<bp<<"\t\t"<<da<<"\t\t\t"<<sa<<"\t\t\t"<<gs;
	}
	else if((bp>=20001)&&(bp<=30000))
	{
		da = ((15.0*bp)/100.0);
		sa = ((10.0*bp)/100.0);
		gs = bp+da+sa;
		cout<<"Basic \t\t DA \t\t Spl. Allowance \t\t Gross Salary \n"<<bp<<"\t\t"<<da<<"\t\t\t"<<sa<<"\t\t\t"<<gs;
	}
	else if(bp>30001)
	{
		da = ((20.0*bp)/100.0);
		sa = ((12.0*bp)/100.0);
		gs = bp+da+sa;
		cout<<"Basic \t\t DA \t\t Spl. Allowance \t\t Gross Salary \n"<<bp<<"\t\t"<<da<<"\t\t\t"<<sa<<"\t\t\t"<<gs;
	}
	else
	{
		cout<<"Invalid input of basic salary.";
	}
	getch();
}