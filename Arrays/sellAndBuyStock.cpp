#include<iostream>
using namespace std;

int main()
{
      int prices[] = {1,2};
      int max=0;
        int sub=0;
        
        for(int i=1; i >=0  ; i--)
        {
            for(int j=i-1 ; j >=0  ; j--)
            {
                sub=prices[i] - prices[j];
                if(sub<=0)
                sub=0;
                else if(sub > max)
                max = sub;
            }
        }
    cout<< max;
}
