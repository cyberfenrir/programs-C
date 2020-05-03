#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char outer, inner;
	for(outer='F'; outer>='A'; --outer)
	{
		for(inner='A'; inner<=outer; inner++)
		{
			cout<<inner;
		}
		cout<<endl;

	}
	getch();
}