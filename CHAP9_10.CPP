#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char *n[100];
	int m[100];
	int i,j,t;
	for(i=0; i<5; i++)
	{
	      cout<<"Enter the name: ";
	      cin>>n[i];
	      cout<<"Enter the marks: ";
	      cin>>m[i];
	}
	for(i=0;i<5;i++)
	{
	   for(j=1; j<=(5-i);j++)
	   {
	       if(m[j-1]<m[j])
	       {
		   t = m[j-1];
		   m[j-1] = m[j];
		   m[j] = t;
		}
	     }
	 }
	 cout<<"Names of students acc. to their rank are :";
	 cout<<"NAME\t\t MARKS";
	 for(i=0; i<5; i++)
	{
	      cout<<n[i]<<"\t"<<m[i]<<endl;

	}
	getch();
}