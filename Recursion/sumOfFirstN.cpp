#include<iostream>
using namespace std;


// If we want to print through function
// void sum1(int sum , int n)
// {
//     if(n<1)
//    {
//     cout<<sum;
//     return;
//    } 

//     sum1(sum+n , n-1);

// }

//right
int sum(int n)
{
    if(n==0)
        return 0;
        
    return n+sum(n-1);
}

int main()
{
    int n;
    cout<<"Enter : ";
    cin>>n;

    cout<<sum(n);
}