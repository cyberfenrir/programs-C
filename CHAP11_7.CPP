#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
void magic(char a[30])
{
    int i,c=0;
    for(i=0; a[i]!='\0'; ++i)
    {
	if(a[i]==a[i+1])
	{
		c=c+1;
		break;
	}
    }
    if(c==1)
    {
	      cout<<"\n The word is a magic string: ";
    }
    else
    {
	      cout<<"\n The word is not a magic string: ";
    }
}
void main()
{
	clrscr();
	char a[30];
	cout<<"Enter a sentence: ";
	gets(a);
	magic(a);
	getch();
}

