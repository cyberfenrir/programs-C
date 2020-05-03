#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{

	clrscr();
	//int n[5];
	char name[5][5];
	int i, j;
	//char str[50];
	cout<<"Enter the names of the students: \n";
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			//gets(str);
			cin>>name[i][j];
		}
	}
	//cout<<"Enter the runs scored by the students: \n";
	/*for(i=0;i<5;i++)
	{
		cin>>n[i]>>"\n";
	}
	*/
	cout<<"The names and the runs scored by the students are: \n";
	for(i=0;i<5;i++)
	{
		cout<<"Name: "<<name[i] [j];//<<" Runs: "<<n[i]<<"\n";
	}
	getch();
}