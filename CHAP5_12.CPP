#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char a;
	cout<<"Enter the code of the quantity : ";
	cin>>a;
	int b;
	cout<<"Enter the quantity of the item: ";
	cin>>b;
	double r;
	cout<<"Enter the rate of the item: ";
	cin>>r;
	char ch;
	cout<<"Do you want to buy anymore items? Press N ";
	cin>>ch;
	double z;
	if(ch=='N')
	{
		z = b*r;
	}
	if((z>=100)&&(z<500))
	{
		cout<<"A key ring is given as a gift.";
	}
	else if((z>=500)&&(z<1000))
	{
		cout<<"A leather purse is given as a gift.";
	}
	else if(z>=1000)
	{
		cout<<"A pocket calculator is given as a gift.";
	}
	else
	{
		cout<<"No gift is given.";
	}
	cout<<"\n Thank You!";
	getch();
}