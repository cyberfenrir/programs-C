#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void pattern(char str[80])
{
	char ch;
	int i, j;
	for(i=0; str[i]; i++)
	{
		for(j=0; j<=i; j++)
		{
			cout<<str[j];
		}
		cout<<endl;
	}
}
void main()
{
	clrscr();
	char st[80];
	cout<<"Enter a word: ";
	gets(st);
	pattern(st);
	getch();
}