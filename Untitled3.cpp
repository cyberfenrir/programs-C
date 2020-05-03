/* Write a C program that displays the position or index in the string S.
*/
 
#include<stdio.h>
#include<string.h>
#include<iostream.h>
int main()
{
  char s[300], t[300];
  char *found;
  //clrscr();
 
/* Entering the main string */
  puts("Enter the first string: ");
  gets(s);
 
/* Entering the string whose position or index to be displayed */
  puts("Enter the string to be searched: ");
  gets(t);
 
/*Searching string t in string s */
  found=strstr(s,t);
  cout<<found;
  if(found)
    cout<<"Second String is found in the First String at "<<found<<" position.\n";
   else
    cout<<"not found";
  return 0;
}