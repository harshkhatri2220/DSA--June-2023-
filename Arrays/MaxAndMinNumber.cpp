#include<iostream>
#include <limits.h>
using namespace std;

int main()
{
    int a[5]={3,5,1,4,3} , min=INT_MAX , max=INT_MIN;

    for(int i=0 ; i<5 ; i++)
    {
        if(a[i]<min)
        min=a[i];
        else if(a[i]>max)
        max=a[i];
    }

    cout<<"max : "<<max<<endl<<"min : "<<min;

    cout<<endl<<INT_MIN;
}