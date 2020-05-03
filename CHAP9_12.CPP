#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char *n[100];
	int m1[100];
	int m2[100];
	int m3[100];
	int r[100];
	int i,j;
	double sum = 0;
	int s1,s2,s3;
	for(i=0; i<5; i++)
	{
	      cout<<"Enter the name: ";
	      cin>>n[i];
	      cout<<"Enter the marks of 1st subject: ";
	      cin>>m1[i];
	      cout<<"Enter the marks of 2nd subject: ";
	      cin>>m2[i];
	      cout<<"Enter the marks of 3rd subject: ";
	      cin>>m3[i];
	      cout<<"Enter the roll no.: ";
	      cin>>r[i];
	}
	for(i=0; i<5; i++)
	{
	    sum = (m1[i]+m2[i]+m3[i])/3;
	    if ((sum>=80)&&(sum<=100))
	    {
		cout<<"A";
	     }
	     else if ((sum>=60)&&(sum<=79))
	     {
		 cout<<"B";
	     }
	     else if ((sum>=40)&&(sum<=59))
	     {
		 cout<<"C";
	     }
	     else if (sum<40)
	     {
		 cout<<"D";
	     }
	}
	getch();
}