#include<iostream.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main( )
{
    char str1[800], str2[800];
	
    cout<<"Enter first string: ";
    cin.getline(str1, 800);
	
    cout<<"Enter second string: ";
    cin.getline(str2, 800);

    int l = 0; //Hold length of second string
    
    //finding length of second string
    for(l = 0; str2[l] != '\0'; l++);

    int i, j;
    
    for(i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if(str1[i] == str2[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if(j == l)
     {
       cout<<"Substring found at position "<< i - j + 1;
     }
	else
	{	
        cout<<"Substring not found";
    }
	cout<<"\n";
    return 0;
}