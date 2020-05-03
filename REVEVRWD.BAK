#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	clrscr();
	int l, i, k=0;
	char str[80], word[80];
	cout<<"Enter any string (max. 80 chars): "<<endl;
	gets(str);
	strcat(str," ");
	for(i=0; str[i]!='\0'; i++)
	{
		if((str[i])!=' ')
		{
			word[k]=str[i];
			k++;
		}
		else
		{
			while(k>0)
			{
				cout<<word[--k];
			}
			cout<<str[i];
		}
	}
	getch();
}
