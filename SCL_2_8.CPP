#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	char str[100];
	int i, count = 0;
	cout<<"\n Enter any String (max. 100) characters :";
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
	    if(str[i]==' ')
	    {
	       count++;
	    }
	}
       int count2 = count+1;
       cout<<"\nNumber of words in the given string is: "<<count2;
       getch();
}






