#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int ar[50],n,i;
    double sum,avg;
    cout<<"Enter the number of elements of the array: ";
    cin>>n;
    cout<<"Enter the elements of array:";
    for(i=0;i<n;i++)
    {
       cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
       sum = sum+ar[i];
    }
    avg = sum / n;
    cout<<"The sum of the numbers is: " <<sum;
    cout<<"The average of the numbers is: "<<avg;
    getch();
}