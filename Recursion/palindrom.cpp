#include<iostream>
using namespace std;

bool check(string s , int size)
{
    static int i = 0;
    if(i==size)
    return true;

    if(s[i]==s[size-1])
    {
        check(s,size-1);
        i++;
    }
    else
    return false;
}
int main()
{
    string s = "12221";

    cout<<check(s , 5);
}