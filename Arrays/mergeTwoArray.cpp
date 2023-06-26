#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int nums1[] ={1,2,3,0,0,0} ,m=3,n=3, nums2[] ={2,5,6};
    int size1=(sizeof(nums1)/sizeof(nums1[0]));
    int start=0;

    for(int i=m ;i<size1 ; i++)
    {
        nums1[i]=nums2[start];
        start++;
    }
        sort(nums1, nums1 + size1);

    for(int j=0 ;j<size1 ; j++)
    {
        cout<< nums1[j];
    }
}