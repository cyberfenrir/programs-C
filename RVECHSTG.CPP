#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
	clrscr();
	char String[50];
	cout<<"Enter the string: ";
	gets(String);
	int len = strlen(String);
	int i, j, k, last=0;
	char ch1;
	for(i=0; i<len; )
	{
		j = i;
		while((String[j] != ' ') && (String[j] != '\0'))
		{
			j++;
		}
		last = j;
		if((j%2) == 0)
		{
			last = j;
		}
		else
		{
			last = j-1;
		}
		for(k=i; k<last; k+=2)
		{
			ch1 = String[k];
			String[k] = String[k+1];
			String[k+1] = ch1;
		}
		i = j+1;
	}
	cout<<"The output is: "<<String<<endl;
	getch();
}