#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void length(char str1[80])
{
	int i, c=0;
	for(i=0; str1[i]!='\0'; i++)
	{
		c++;
	}
	cout<<"The length of the string is: "<<c;
}
void concatenate(char str2[80], char str3[80])
{
      strcat(str2, str3);
      cout<<"The concatenated string is: "<<str2<<endl;
}
void reverse(char str4[80])
{
	int i= 0, c = 0,l;
	l = strlen(str4);
	cout<<"The reversed string is: ";
	for(i=l-1; str4[i]>=0; i--)
	{
		cout<<str4[i];
		if((str4[i]=='a')||(str4[i]=='e')||(str4[i]=='i')||(str4[i]=='o')||(str4[i]=='u')||(str4[i]=='A')||(str4[i]=='E')||(str4[i]=='I')||(str4[i]=='O')||(str4[i]=='U'))
		{
		       c++;
		}
	}
	cout<<endl;
	cout<<"The number of vowels are: "<<c;
}
void copy(char str6[80],char str7[80])
{
    int l1, l2;
    if(strlen(str6)>strlen(str7))
    {
	 strcpy(str6, str7);
	 cout<<"Second string is copied on the first."<<endl;
	 l1 = strlen(str6);
	 cout<<"The copied string is: "<<str6<<endl;
	 cout<<"The new length of the copied string is: "<<l1;
    }
    else if(strlen(str7)>strlen(str6))
    {
	 strcpy(str7, str6);
	 cout<<"First string is copied on the second."<<endl;
	 l2 = strlen(str7);
	 cout<<"The copied string is: "<<str7<<endl;
	 cout<<"The new length of the copied string is: "<<l2;
     }
     else if(strlen(str7)==strlen(str6))
    {
	 cout<<"The strings are of equal length."<<endl;;
	 l1 = strlen(str6);
	 cout<<"String 1 is: "<<str6<<endl;
	 cout<<"The length of the String 1 is: "<<l1<<endl;
	 l2 = strlen(str7);
	 cout<<"String 2 is: "<<str7<<endl;
	 cout<<"The length of the String 2 is: "<<l2;
    }
}
void main()
{
	clrscr();
	int ch;
	cout<<"Enter the choice: ";
	cin>>ch;
	switch(ch)
	{
	     case 1:  char s1[80] = " ";
		      cout<<"Enter the string: ";
		      gets(s1);
		      length(s1);
		      break;
	     case 2:  char s2[80] = " ", s3[80] = " ";
		      cout<<"Enter the first string: ";
		      gets(s2);
		      cout<<"Enter the second string: ";
		      gets(s3);
		      concatenate(s2,s3);
		      break;
	     case 3:  char s4[80]=" ";
		      cout<<"Enter the string: ";
		      gets(s4);
		      reverse(s4);
		      break;
	     case 4:  char s5[80] = " ", s6[80] = " ";
		      cout<<"Enter the first string: ";
		      gets(s5);
		      cout<<"Enter the second string: ";
		      gets(s6);
		      copy(s5,s6);
		      break;
	     default: cout<<"Invalid Input.";
	}
	getch();
}