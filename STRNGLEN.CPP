#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char n[100];
	int i, j, len;
	for(i=0; i<3; i++)
	{
	      cout<<"Enter the name: ";
	      cin.getline(n, 100);
	}
	for(i=0; i<3; i++)
	{
	      puts(n[i]);
	}
	/*for(i=0; i<3; i++)
	{
	      for(j=0; n[i]!='\0'; j++)
	      {
		   len++;
	      }
	      cout<<len<<endl;
	      len=0;
	}*/
	getch();
}

