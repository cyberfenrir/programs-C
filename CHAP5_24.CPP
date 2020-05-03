#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	cout<<"\t\t\tMENU: ";
	cout<<"\t\t1. Volume of a cube.";
	cout<<"\t\t2. Volume of a sphere ";
	cout<<"\t\t3. Volume of a cuboid ";
	char ch;
	cout<<" Enter the choice";
	cin>>ch;
	double s,r,l,h;
	double b;
	double a;
	switch(ch)
	{
		case 1  : cout<<"Enter the length of the edge of the cube:";
			  cin>>s;
			  a = s*s*s;
			  cout<<"The volume of the cube is:"<<a;
			  break;

		case 2  : cout<<"Enter the radius of the sphere:";
			  cin>>r;
			  a = (4.0/3.0)*(22.0*7.0)*r*r*r;
			  cout<<"The volume of the sphere is:"<<a;
			  break;

		case 3   :cout<<"Enter the length of cuboid:";
			  cin>>l;
			  cout<<"Enter the breadth of cuboid:";
			  cin>>b;
			  cout<<"Enter the height of cuboid:";
			  cin>>h;
			  a = l*b*h;
			  cout<<"The volume of the cuboid is:"<<a;
			  break;

		default:  cout<<"Invalid input of choice.";
	}
	getch();
}
