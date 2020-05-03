#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int a;
	cout<<"\t\t\tMENU: ";
	cout<<"\n\t\t1. To Calculate the Factorial  ";
	cout<<"\n\t\t2. To Check whether the number is Prime or not ";
	cout<<"\n\t\t3. To print the cube of square root of a number ";
	int ch;
	cout<<"\n Enter the choice:";
	cin>>ch;
	cout<<" Enter the number: ";
	cin>>a;
	int i;
	switch(ch)
	{
		case 1:   int pro = 1;
			  for(i=1;i<=a;i++)
			  {
			      pro = pro*i;
			  }
			  cout<<"The Factorial of a number is: "<<pro;
			  break;

		case 2:   int c = 0;
			  for(i=1;i<=a;i++)
			  {
			      if((a%i)==0)
			      {
				 c++;
			      }
			  }
			  if(c==2)
			  {
			       cout<<"The number is prime: ";
			  }
			  else
			  {
			       cout<<"The number is not prime: ";
			  }
			  break;

		case 3:   double b = sqrt(a);
			  double d = b*b*b;
			  cout<<"The cube of square root of a number is: "<<d;
			  break;

		default:  cout<<"Invalid input of choice.";
	}
	getch();
}
