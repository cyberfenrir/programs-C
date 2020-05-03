#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
void freq(char a[30])
{
    int i,c = 0;
    for(i=0; a[i]!='\0'; ++i)
    {
	 if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U'))
	     c=c+1;
    }
    cout<<"\n The number of vowels is: "<<c;
}
void main()
{
	clrscr();
	char a[30];
	cout<<"Enter a sentence: ";
	gets(a);
	freq(a);
	getch();
}

