#include<iostream>
using namespace std;

int main()
{
    int a[] = {0,3,0,1,12};
    // int a[] = {1,5,0,0,2,3};
    // int a[] = {2,3,4,5,6,7};
    int size = 5;
    int start=0;

    for(int i=0 ; i<size ; i++)
    {
        if(a[i]!=0)
        {
            a[start] = a[i];
            start++;
        }
        
    }

    for(int j=start ;j<size ;j++)
    {
        a[j]=0;
    }

    for(int k=0 ;k<size ;k++)
    {
        cout<<a[k]<<" ";
    }

    return 0;
}