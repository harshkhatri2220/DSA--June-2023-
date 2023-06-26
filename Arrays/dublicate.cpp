#include <iostream>
using namespace std;
//wrong
int main()
{
    int a[] = {1, 2, 2, 4, 5}, sum2 = 0, sum1 = 0;

    for (int i = 0; i < 5; i++)
    {

        sum1 = sum1 + (i + 1);
        if (a[i] == a[i + 1])
        {
            cout << "dublicate element is : " << a[i] << endl;
        }

        if(a[i-1] != (i-1))
        {
            cout<<"missing no. :"<<a[i-1];
            
        } 
        if(a[i+1]== (i+2))
        {
            cout<<"missing no. :"<<i+2;
            
        }
    }
}