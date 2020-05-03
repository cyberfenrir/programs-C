#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char *c[100];
	char *ca[100];
	int i;
	for(i=0; i<5; i++)
	{
	      cout<<"Enter the country name: ";
	      cin>>c[i];
	      cout<<"Enter the capital: ";
	      cin>>ca[i];
	}
	for(i=0; i<5; i++)
	{
	      cout<<c[i]<<ca[i];
	      //cout<<ca[i]<<endl;
	}
	getch();
}