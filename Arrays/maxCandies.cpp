#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1,1,2,2,3,3};
    int count = 1;
    int max = nums.size() / 2;  

    for (int i = 0; i < nums.size()-1; i++)
    {

        if (nums[i] != nums[i + 1])
        {
            count++;
            
        }
    }
    if (count <= max)
        cout << count;
    else
        cout << max;
}