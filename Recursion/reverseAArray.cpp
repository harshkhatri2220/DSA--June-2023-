#include <algorithm>
using namespace std;
#include <iostream>

void reverse( int a[], int size)
{
    static int i =0;
    if (i >= size)
        return;

    swap(a[i], a[size - 1]);
    i++;
    reverse( a, size - 1);
}
int main()
{
    int a[] = {1, 2, 3, 4}, size = 4;

    for (int i = 0; i < size; i++)
        cout << a[i]<<endl;
    reverse(a, size);

    for (int i = 0; i < size; i++)
        cout << a[i];
}