#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
	clrscr();
	char line[80];
	char sub[15];
	cout<<"Enter the line of text: ";
	gets(line);
	cout<<"Enter the substring to be found: ";
	gets(sub);
	int len = strlen(line);
	int i, j, k, spos, lpos, len2;
	for(i=0; i<len; )
	{
		j = i;
		if(line[j] == sub[0])
		{
			k = 0;
			while(line[j++] == sub[k++]);
			if(sub[k-1] == '\0')
			{
				spos = i;
				break;
			}
			else
			{
				i = j-1;
			}
		}
		else
		{
			i++;
		}
	}
	len2 = strlen(sub);
	for(i=len-1; i>=0; )
	{
		j = i;
		if(line[i] == sub[len2-1])
		{
			k = len2-1;
			while(line[j--] == sub[k--]);
			if(k<0)
			{
				lpos = j+2;
				break;
			}
			else
			{
				i = j+1;
			}
		}
		else
		{
			i--;
		}
	}
	cout<<"First occurence of "<<sub<<" is at position "<<spos+1<<endl;
	cout<<"Last occurence of "<<sub<<" is at position "<<lpos+1<<endl;
	getch();
}