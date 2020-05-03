#include<iostream.h>
#include<stdlib.h>
#include<fstream.h>
#include<string.h>
struct customer
	{
	 char name[51];
	 float balance; 
 	};
 int main()
 {
 	 System("cls");
 	 customer savac;
 	 strcpy(savac.name,"tina marshall");
 	 savac.balance = 21310.75;
 	 ofstream fout;
 	 fout.open("saving",ios::out|ios::binary)binary;
 	 if(!fout)
 	 {
 	 	cout<<"file can/'t be opened \n";
 	 	return 1;
 	 }
 	fout.write((char*)& savac, sizeof(customer));
 	fout.close();
 	ifstream fin;
 	fin.open("saving",ios::int_type::in|ios::binary)binary;
 	fin.read((char*)&savac,sizeof(customer));
 	cout<<savac.name;
 	cout<<"has the balance amount of Rs."<<savac.balance<<"\n";
 	fin.close());
 	return 0;
 }
 }	
 	