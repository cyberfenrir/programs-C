#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct Emp
{
  int empno;
  char ename[30];
  double salary;
};
void sortsalary(Emp S[10], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
	   cout<<"Enter record number: "<<i+1<<endl;
	   cout<<"Enter employee number: ";
	   cin>>S[i].empno;
	   cout<<"Enter employee name: ";
	   cin>>S[i].ename;
	   cout<<"Enter salary: ";
	   cin>>S[i].salary;
	   cout<<endl;
	 }
	 int j;
	 Emp temp;
	 for(i=0; i<n-1; i++)
	 {
	    for(j=0; j<n-i; j++)
	    {
		if(S[j].salary<S[j+1].salary)
		{
		   temp = S[j];
		   S[j]=S[j+1];
		   S[j+1]=temp;
		}
	    }
	 }
	 cout<<endl<<"Display the sorted array:"<<endl;
	 for(i=0;i<n; i++)
	 {
	    cout<<endl<<"Employee number: "<<S[i].empno<<endl;
	    cout<<"Employee name: "<<S[i].ename<<endl;
	    cout<<"Salary: "<<S[i].salary<<endl;
	 }
}
void main()
{
	clrscr();
	Emp S[10];
	int i, n;
	cout<<"How many records do you want to enter? \t";
	cin>>n;
	sortsalary(S,n);
	getch();
}