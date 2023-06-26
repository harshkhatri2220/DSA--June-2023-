#include<iostream>
#include <limits.h>

using namespace std;

int main()
{
    int a[]={-2,-5,-3,-4,-1,-2,-8,-5,-4} , maxSum=a[0] , currSum=0 ;

    for(int i=0;i<9;i++)
    {
        currSum = currSum+a[i];

        if(currSum>maxSum)
        {
            maxSum=currSum;
        }
        if(currSum<0)
        {
            currSum=0;
        }        

    }
    cout<<maxSum;
}

    // With O(N2)

    // int sumMax=INT_MIN;
    // int sum=0;

    // for(int i=0;i<9 ;i++)
    // {
    //     for(int j=i;j<9;j++)
    //     {
    //         sum=sum+a[j];
    //         if(sum>sumMax)
    //         sumMax = sum; 
    //            cout<<sum;
    //     }
    //     cout<<endl;
    // }
    // cout<<sumMax;