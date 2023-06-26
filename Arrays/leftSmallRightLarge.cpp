// - Given an integer array containing n elements. Find the element in the array for which all the elements
// to its left are smaller than it and all the elements to the right of it are larger than it. Here 1<n<101.
// Ex: arr=[1,6,5,7,10,8,9]
// Output: 7
// Explanation: Here all the elements to the left of 7 are smaller than it and all the elements to the right of it
// are greater than it.
// Ex: arr=[5,6,2,8,10,9]
// Output: -1
// Explanation: Here there is no element in the array which satisfies the given condition.

#include <iostream>
using namespace std;

int main()
{
    int a[] = {5,6,2,8,10,19,18} ,num = 0,x=1;

    for (int i = 1; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (a[j] > a[i])
            {
                x = 1;
            }
            else
            {
                x = 0;
                break;
            }
        }

        
        if (x == 1)
        {
            for (int k = i; k > 0; k--)
            {
                if (a[k - 1] < a[i])
                {
                    x = 1;
                    num = a[i];
                }
                else
                {
                    x = 0;
                    break;
                }
                 
            }
            
    
        }
        if(x==1)
            {
                break;
            }
    }


    if (x == 1)
    {
        cout << num;
    }
    else
    {
        cout << "no suvh number available";
    }

    return 0;
}