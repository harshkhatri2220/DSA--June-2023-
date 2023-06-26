// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int start = 0;
    int nums[] = {0,1,0,3,12};
        int end = 4;

for(int i=0 ; i<5 ; i++)
        {
            if(nums[i] != 0)
            {
                nums[start] = nums[i];
                start++;
               
            }
            
        }
        cout<<start<<endl;
        
        for(int i=start ; i<5 ; i++)
        {
            nums[i] =0;
        }
        for(int i=0 ; i<5 ; i++)
        {
            cout<<nums[i];
        }
    return 0;
}