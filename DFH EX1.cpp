#include<iostream.h>
#include<fstream.h>
int main()
{
	ofstream filout;
	filout.open("marks.dat",ios::out);
	char ans='y';
	int rollno ; float marks;
	while(ans=='y'||ans=='Y')
		{
		cout<<"\n Enter Roll no. : ";
		cin>>rollno;
		cout<<"\n Enter marks : ";
		cin>>marks;
		fileout<<rollno<<"\n">>marks<<"\n";
		cout<<"\n want to enter more records?(y/n).....";
		cin>>ans;
		}
	fileout.close();
	return 0;
}