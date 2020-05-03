#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void palin(char s[])
{
   int l, i ,j, flag=0;
   l = strlen(s);
   for(i=0,j=l-1; i<l/2; i++,j--)
   {
      if(s[i]!=s[j])
      {
	 flag = 1;
	 break;
       }
   }
   if(flag==1)
   {
       cout<<"It is not a palindrome string ";
   }
   else
   {
      cout<<"It is a palindrome string ";
   }
}
void main()
{
   clrscr();
   char s[50];
   cout<<"Enter the string: ";
   gets(s);
   palin(s);
   getch();
}