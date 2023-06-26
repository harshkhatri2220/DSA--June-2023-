#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "I am, AAa: boi ; ";
    string S="";

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z') // checking for uppercase characters
            str[i] = str[i] + 32;           // converting uppercase to lowercase
    }
    

    for (int i = 0; str[i] != '\0'; i++)
    {
        
          if((int(str[i]))>=97 && (int(str[i]))<=122)
          {
            S.push_back(str[i]);
          }

    }
    cout << str;
    cout<<endl<<S<<endl;
   
}

// Time Complexity O(N2)

// for(int i=0;i<5;i++)
// {
//     for(int j=i+1 ; j<5;j++)
//     {
//         if(a[i]==a[j])
//         {
//             cout<<"true";
//             flag=1;
//             break;
//         }
//     }
//     if(flag==1)
//     break;
// }
// if(flag==0)
// cout<<"false";
// return 0;