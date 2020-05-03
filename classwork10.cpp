/* C++ Basic Operations on Binary Files
 * This program demonstrates how to insert
 * data in a sorted file in C++ */

#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

class student
{
	int rollno;
	char name[20];
	char branch[3];
	float marks;
	char grade;

	public:
		void getdata()
		{
			cout<<"Rollno: ";
			cin>>rollno;
			cout<<"Name: ";
			cin>>name;
			cout<<"Branch: ";
			cin>>branch;
			cout<<"Marks: ";
			cin>>marks;

			if(marks>=75)
			{
				grade = 'A';
			}
			else if(marks>=60)
			{
				grade = 'B';
			}
			else if(marks>=50)
			{
				grade = 'C';
			}
			else if(marks>=40)
			{
				grade = 'D';
			}
			else
			{
				grade = 'F';
			}
		}

		void putdata()
		{
			cout<<"Rollno: "<<rollno<<"\tName: "<<name<<"\n";
			cout<<"Marks: "<<marks<<"\tGrade: "<<grade<<"\n";
		}

		int getrno()
		{
			return rollno;
		}
}stud1, stud;

int main()
{
	
	ifstream fin("marks.dat", ios::in);
	ofstream fout("temp.dat", ios::out);
	char last='y';
	cout<<"Enter details of student whose record is to be inserted\n";
	stud1.getdata();
	while(!fin.eof())
	{
		fin.read((char *)&stud, sizeof(stud));
		if(stud1.getrno()<=stud.getrno())
		{
			fout.write((char *)&stud1, sizeof(stud1));
			last = 'n';
			break;
		}
		else
		{
			fout.write((char *)&stud, sizeof(stud));
		}
	}
	if(last == 'y')
	{
		fout.write((char *)&stud1, sizeof(stud1));
	}
	else if(!fin.eof())
	{
		while(!fin.eof())
		{
			fin.read((char *)&stud, sizeof(stud));
			fout.write((char *)&stud, sizeof(stud));
		}
	}
	fin.close();
	fout.close();
	remove("marks.dat");
	rename("temp.dat", "marks.dat");
	fin.open("marks.dat", ios::in);
	cout<<"File now contains:\n";
	while(!fin.eof())
	{
		fin.read((char *)&stud, sizeof(stud));
		if(fin.eof())
		{
			break;
		}
		stud.putdata();
	}
	fin.close();
	return 0;
}