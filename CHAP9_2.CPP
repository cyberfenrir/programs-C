#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int ar[50],n,i,x;
    cout<<"Enter the number of elements of the array: ";
    cin>>n;
    cout<<"Enter the elements of array:";
    for(i=0;i<n;i++)
    {
       cin>>ar[i];
    }
    for(i=0;i<(n-1);i++)
    {
       x = ar[i]+1;
       if(x==(ar[i+1]))
       {
	   cout<<"The consecutive numbers are: "<<ar[i]<<" and "<<ar[i+1];
       }
    }
    getch();
}