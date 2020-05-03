#include<iostream.h>
#include<conio.h>
void Encode(char str[])
{
	for(int b=0; str[b]!='\0'; b++);
	for(int c=0; c<b/2; c++);
	if(str[c]=='A'||str[c]=='E')
	   str[c]='#';
	   else
	   {
		char temp = str[c];
		str[c] = str[b-c-1];
		str[b-c-1] = temp;
}

void main()
{
	clrscr();
	char M[] = {"INDIA IS GREAT"};
	Encode(M);
	cout<<"The Encoded STring : "<<M<<endl;
	getch();
}