#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "anagram", t = "nagaram";
    int sum1 = 0;
    int sum2 = 0;

    if (s.length() == t.length())
    {
        for (int i = 0; i<s.length(); i++)
        {
            sum1 = sum1 + int(s[i]);
            sum2 = sum2 + int(t[i]);
        }
        if (sum1 == sum2)
            cout << "true";
        else
            cout << "false";
    }
    else
        cout << "false";
}