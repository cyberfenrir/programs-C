#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void revstring(char str[80])
{
	char st[80];
	int i, k=0;
	strcat(str," ");
	cout<<"The reversed string is: "<<endl;
	for(i=0; str[i]!='\0'; i++)
	{
		if((str[i])!=' ')
		{
			st[k]=str[i];
			k++;
		}
		else
		{
			while(k>0)
			{
				cout<<st[--k];
			}
			cout<<str[i];
		}
	}
}
void main()
{
	clrscr();
	char word[80];
	cout<<"Enter any string (max. 80 chars): "<<endl;
	gets(word);
	revstring(word);
	getch();
}
