#include<iostream>
using namespace std;

int main()
{
    string str="aba";
    string str2="";

    for(int i=str.length()-1 ; i>=0 ; i--)
    {
        str2.push_back(str[i]);
    }
    cout<<str2;

    if(str==str2)
    {
        cout<<"yas";
    }
    else
    {
        cout<<"no";
    }
    
}