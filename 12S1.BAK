#include<iostream.h>
#include<conio.h>
class Tourist
{
     int Cno;
     char Ctype;
     int PerKM;
     int Distance;
     int Citycharge()
     {
	  if(Ctype=='A')
	  {
		PerKM=20;
	  }
	  else if(Ctype=='B')
	  {
		PerKM=18;
	  }
	  else if(Ctype=='C')
	  {
		PerKM=15;
	  }
	  return (PerKM);
     }
     public: void Registercab();
	     void Display();
};

void Tourist::Registercab()
{
     cout<<"Enter the Car number: ";
     cin>>Cno;
     cout<<"Enter the Car type: ";
     cin>>Ctype;
}
void Tourist::Display()
{
      int KM = Citycharge();
      cout<<"Enter the Distance:";
      cin>>Distance;
      cout<<"The car number is:"<<Cno<<endl;
      cout<<"The car type is:"<<Ctype<<endl;
      cout<<"The Total Distance is:"<<Distance*KM;

}
void main()
{
	clrscr();
	Tourist T;
	T.Registercab();
	T.Display();
	getch();
}


