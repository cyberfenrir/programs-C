#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,a,b;
	int lcm,hcf;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	if(a<0)
	{
	    a = -a;
	}
	if(b<0)
	{
	    b = -b;
	}
	for(lcm=1; lcm>0; lcm++)
	{
	    if((lcm%a==0)&&(lcm%b==0))
	    {
	       cout<<"The LCM of the numbers is :"<<lcm<<"\n";
	       break;
	    }
	}
	hcf = (a*b)/lcm;
	cout<<"The HCF of the numbers is :"<<hcf;
	getch();
}