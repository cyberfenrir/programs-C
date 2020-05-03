#include<iostream.h>
#include<process.h>
#include<fstream.h>
#include<stdio.h>
int main()
{
	ofstream fout;
	fout.open("out.txt");
	char str[300]="time is a great teacher but unfortunately it kills all its pupils.Berlioz.";
	if(!fout)
	{
		cout<<"file is not opened";
		exit(0);
	}
	else
	{
		fout<<str;
		fout.close();
	}

	ifstream fin;
	fin.open("out.txt");
	char ch;
	int count = 0;
	while(!fin.eof())
	{
		fin.get(ch);
		count++;
	}
	cout<<"number of characters in file is \n";
	cout<<count;
	fin.close();
	return 0;	

}