#include<iostream.h>
#include<conio.h>
void merge(int a[20],int b[20],int m, int c[50],int n)
{
    int i,j,k,p;
    k=0, i=m-1, j=n-1;
    while(i>=0 && j>=0)
    {
	if(a[i]>=b[j])
	{
	    c[k] = a[i];
	    i--;
	    k++;
	 }
	 else
	 {
	      c[k]=b[j];
	      j--;
	      k++;
	  }
     }

     for(p=i; p>=0; p--)
     {
	 c[k]=a[p];
	 k++;
     }
     for(p=j; p>=0; p--)
     {
	c[k] = b[p];
	k++;
     }
     cout<<"\n\nThe merged array is\n";
     for(k=0; k<m+n;k++)
     {
	 cout<<c[k]<<" ";
     }

}
void main()
{
	clrscr();
	int a[20],b[20],c[50],m,n,i,j;
	cout<<"Enter the number of elements of first array: ";
	cin>>m;
	cout<<"Enter the first array elements: \n";
	for(i=0;i<m;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the number of elements of second array: ";
	cin>>n;

	cout<<"Enter the second array elements: \n";
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	merge(a,b,c,m,n);
	getch();
}