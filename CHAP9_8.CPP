#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char *n[100];
	int i;
	for(i=0; i<5; i++)
	{
	      cout<<"Enter the name: ";
	      cin>>n[i];

	}
	char *na;
	cout<<"Enter the name to be searched ";
	cin>>na;
	int f = 0;
	for(i=0; i<5; i++)
	{
	      if(na==n[i])
	      {
		  f++;
	      }
	}
	if (f==1)
	{
	   cout<<"Search Successful ";
	}
	else
	{
	   cout<<"Search unsuccessful ";
	}
	getch();
}