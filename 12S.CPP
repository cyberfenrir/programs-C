#include<iostream.h>
#include<conio.h>
class Tourist
{
     int Cno;
     char Ctype;
     int PerKM;
     int Distance;
     Citycharge()
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
      cout<<"Enter the Distance:";
      cin>>Distance;
      cout<<"The car number is:"<<Cno;
      cout<<"The car type is:"<<Ctype;
      cout<<"The PerKM Distance is:"<<Distance;
}

