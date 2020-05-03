#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int B[9],A[3][3];
  cout<<"Enter the array elements: "<<endl;
  int i,j;
  for(i=0; i<3; i++)
  {
     for(j=0; j<3; j++)
     {
	 cin>>A[i][j];
      }
   }
   int k=0;
   for(i=0; i<4; i++)
  {
     for(j=0; j<4; j++)
     {
	B[k]=A[i][j];
	k++;
      }
   }
   cout<<"The 1d array is : ";
   for(i=0; i<9; i++)
   {
       cout<<B[i];
   }
   getch();
}