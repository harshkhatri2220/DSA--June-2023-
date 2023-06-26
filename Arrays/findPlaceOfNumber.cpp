#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 6, 8, 10};
    int target = 0;
    int start = 0, end = 3, mid = (start + end) / 2;

    cout << "Enter target :";
    cin >> target;

    while (start <= end)
    {
        if (target == a[mid])
        {
            cout << target << " is available at index :" << mid;
            exit(0);
        }
        else if (target > a[mid])
        {
            start = start + 1;

        }
        else if (target < a[mid])
        {
            end = end - 1;

        }
        mid = (start + end) / 2;
    }

    if(target < a[mid] && mid==0)
    {
        cout << "Predicted index : " << mid ;
    }
    else if (target > a[mid])
    {
        cout << "Predicted index : " << mid + 1;
    }
    else if(target < a[mid])
    {
        cout << "Predicted index : " << mid - 1;
    }

    return 0;
}