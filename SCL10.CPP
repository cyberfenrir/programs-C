#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void tot_words(char str[])
{
   int l, i, k=0;
   strcat(str," ");
   for(i=0; str[i]!='\0'; i++)
   {
       if((str[i])==' ')
       {
	  k++;
       }
   }
   cout<<"The number words in the string is: "<<k;
}
void main()
{
	clrscr();
	char str[80];
	cout<<"Enter any string (max. 80 chars): "<<endl;
	gets(str);
	tot_words(str);
	getch();
}
