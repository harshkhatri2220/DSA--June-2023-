#include<iostream>
using namespace std;

int main()
{
    int a[] = {-1,-2,3};
    for(int i=0 ; i<3 ; i++)
    {
        if(a[i] < 0)
        a[i] = -a[i];
    } 
    
    for(int i=0 ; i<3 ; i++)
    {
        cout<<a[i];
    } 

}