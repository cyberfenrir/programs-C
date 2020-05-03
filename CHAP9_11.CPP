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
	double sum = 0;
	for(i=0; i<5; i++)
	{
	      cout<<"Enter the name: ";
	      cin>>n[i];
	      cout<<"Enter the marks: ";
	      cin>>m[i];
	      sum = sum+m[i];
	}
	double avg = sum/5;
	int max = m[0];
	int p =0;
	for(i=0;i<5;i++)
	{
	   if(m[i]>max)
	       {
		   max = m[i];
		   p++;
		}
	 }
	 cout<<"Avg. marks is :"<<avg;
	 cout<<"Highest marks is "<<m[p];
	 for(i=0; i<5; i++)
	{
	      cout<<n[i]<<"\t"<<m[i]<<endl;

	}
	getch();
}