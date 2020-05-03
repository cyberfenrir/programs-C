#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct Voter
{
	int voterid;
	int voterage;
	char add[80];
};
void voters_rec(Voter S[20], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		cout<<"Enter record number: "<<i+1<<endl;
		cout<<"Enter Voter ID: ";
		cin>>S[i].voterid;
		cout<<"Enter age: ";
		cin>>S[i].voterage;
		cout<<"Enter address: ";
		cin>>S[i].add;
		cout<<endl;
	}
	cout<<"The voters whose age is more than or equal to 60 are: "<<endl;
	for(i=0; i<n; i++)
	{
		if((S[i].voterage) >= 60)
		{
			cout<<"Voter ID: "<<S[i].voterid<<endl;
			cout<<"Voter's age: "<<S[i].voterage<<endl;
			cout<<"Address: "<<S[i].add<<endl;
			cout<<endl;
		}
	}
}
void main()
{
	clrscr();
	Voter S[20];
	int i, n;
	cout<<"How many records do you want to enter?  \t";
	cin>>n;
	voters_rec(S,n);
	getch();
}