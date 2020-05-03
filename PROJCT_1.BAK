#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int size, c;
	cout<<"Enter the size of the matrix: ";
	cin>>size;
	int **a = new int*[size];
	int i, j, k;
	for(i=0; i<size; i++)        //Initialising columns for each row.
	{
		a[i] = new int[size];
	}
	cout<<"Enter the elements of the matrix one by one: \n";
	for(i=0; i<size; i++)        //Taking value corresponding to each cell from input.
	{
		for(j=0; j<size; j++)
		{
			cin>>a[i][j];
		}
		cout<<"\n";
	}
	for(i=0,j=0,k=size-1; j<size; i++,j++,k--)  //Swapping values of diagonals.
	{
		c = a[j][i];
		a[j][i] = a[j][k];
		a[j][k] = c;
	}
	cout<<"The values after swapping the diagonal elements of the matrix are: \n";
	for(i=0; i<size; i++)         //Printing the values.
	{
		for(j=0; j<size; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	getch();
}