#include<iostream.h>
#include<conio.h>
void dayofweek(int dysno)
{
    switch(dysno)
    {
	case 1: cout<<"Monday";
	case 2: cout<<"Tuesday";
	case 3: cout<<"Wednesday";
	case 4: cout<<"Thursday";
	case 5: cout<<"Friday";
	case 6: cout<<"Saturday";
	case 7: cout<<"Sunday";
    }
}
void main()
{
   int dysno;
   cout<<"Enter the number of day:";
   cin>>dysno;
   dayofweek(dysno);
   getch();
}