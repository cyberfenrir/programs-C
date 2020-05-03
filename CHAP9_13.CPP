#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char *n[100], *na[1000], ch, ch1;
	int i, len;
	for(i=0; i<3; i++)
	{
	      cout<<"Enter the name: ";
	      cin>>n[i];
	      *na[i]=*n[i];
	}
	for(i=0; i<3; i++)
	{
	      ch='A';
	      //ch1='a';
	      len= strlen(na[i]);
	      //for(int j=0; j<len; j++)
	      //{
		   int k=0;
		   if(('A'==*na[k]) && ('a'==*na[k]))
		   {
			  puts(na[i]);
		   }
		   //break;
	      //}
	      len= 0;
	}
	getch();
}