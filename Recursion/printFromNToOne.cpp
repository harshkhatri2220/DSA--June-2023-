//print from N to One

#include<iostream>
using namespace std;

void print(int n)
{
    cout<<n;

    if(n==1)
    return ;

    print(--n);
}
int main()
{
    int N;
    cout<<"enter :";
    cin>>N;
    print(N);
}