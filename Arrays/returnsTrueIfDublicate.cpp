#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int j = 0; j < size; j++)
    {
        if (arr[j] == arr[j + 1])
            cout << "dublicate";
    }
}