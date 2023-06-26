#include<iostream>
// #indlude<string.h>
using namespace std;

int main()
{
    string str  ;
    char temp;
    cout<<"enter";
    getline(cin,str);
    int size = str.length();
    for(int i = 0 ; i<size ; i++)
    {
        size--;
        temp = str[i];
        str[i] = str[size];
        str[size]=temp;
    }
    cout<<str;

    // int a[5] = {1,2,3,4,5};
    // int temp;
    // int size=4;
    // for(int i=0 ; i<size ; i++)
    // {
    //     temp = a[i];
    //     a[i]=a[size];
    //     a[size]=temp;
    //     size--;
    // }
    // for(int i =0 ; i<5 ; i++)
    // {
    //     cout<<a[i];
    // }
}