#include <iostream>
#include <string>
using namespace std;

int main()
{

    int count[26] = {0};
    string s = "aabcd" ;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        count[c - 'a']++;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (count[s[i] - 'a'] == 1)
        {
            cout << i;
            exit(0);
        }
    }
}
