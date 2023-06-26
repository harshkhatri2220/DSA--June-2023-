//print from 1 to n

#include<iostream>
using namespace std;

void print(int i , int n)
{

    cout<<i;

    if(i==n)
    return;
    
    print(++i , n);
}

int main()
{
    int N;
    cout<<"enter : "<<endl;
    cin>>N;
    print(1,N);
}