#include<iostream.h>
class abc
{
	int arr1[50],arr2[50],i,j,temp, merge[100];
	public:
	void sort1(int b)
	{
    cout<<"Enter the 1st array elements: "; 
    for(i=0;i<b;++i)
       {
        cin>>arr1[i];
       }
	for(i=1;i<b;++i)
    {
        for(j=0;j<(b-i);++j)
        {
			if(arr1[j]>arr1[j+1])
            {
                temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
	}
    
    cout<<"1st Array after bubble sort:";
    for(i=0;i<b;++i)
        cout<<" "<<arr1[i];
        
	}
	void sort2(int b)
	{
    cout<<"Enter the 2nd array elements: "; 
    for(i=0;i<b;++i)
       {
        cin>>arr2[i];
       }
	for(i=1;i<b;++i)
    {
        for(j=0;j<(b-i);++j)
        {
			if(arr2[j]>arr2[j+1])
            {
                temp=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=temp;
            }
        }
	}
    
    cout<<"2nd Array after bubble sort:";
    for(i=0;i<b;++i)
        cout<<" "<<arr2[i];
        
	}
	void merge1(int size1, int size2)
	{
		int size;
		int k;
		for(i=0; i<size1; i++)
		{
			merge[i]=arr1[i];
		}
		size=size1+size2;
		for(i=0, k=size1; k<size && i<size2; i++, k++)
		{
			merge[k]=arr2[i];
		}
		cout<<"\n Now the new array after merging is :\n";
		for(i=0; i<size; i++)
		{
			cout<<merge[i]<<" ";
		}
	}
	void finalsort(int size1,int size2)
	{
	int size;
	size=size1+size2;
	for(i=1;i<size;++i)
    {
        for(j=0;j<(size-i);++j)
        {
			if(merge[j]>merge[j+1])
            {
                temp=merge[j];
                merge[j]=merge[j+1];
                merge[j+1]=temp;
            }
        }
	}
    
    cout<<"\n final Array after bubble sort:\n";
    for(i=0;i<size;++i)
        cout<<" "<<merge[i];
        
	}
}obj;
int main()
{
	int n,m;
	cout<<"Enter the size of 1st array: ";
    cin>>n;
    obj.sort1(n);
	cout<<"\n Enter the size of 2nd array: ";
    cin>>m;
	obj.sort2(m);
	obj.merge1(n,m);
	obj.finalsort(n,m);
	return 0;
}