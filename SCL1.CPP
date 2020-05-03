#include<iostream.h>
#include<conio.h>
void sort(int m[],int n)
{
    int i, j , t;
    for(i=0; i<n; i++)
    {
	for(j=0; j<(n-i-1); j++)
	{
	   if(m[j]<m[j+1])
	   {
	      t = m[j];
	      m[j] = m[j+1];
	      m[j+1] = t;
	   }
	}
     }
     cout<<"\nThe array after sorting in descending order is:- \n";
     for(i=0; i<n; i++)
     {
	 cout<<m[i]<<" ";
     }
}
void main()
{
   clrscr();
   int m[20];
   int n;
   int i;
   cout<<"Enter the number of array elements: ";
   cin>>n;
   cout<<"Enter the array elements:\n";
   for(i=0; i<n; i++)
   {
      cin>>m[i];
   }
   cout<<"The unsorted array is:- \n";
   for(i=0; i<n; i++)
   {
      cout<<m[i]<<" ";
   }
   sort(m,n);
   getch();
}