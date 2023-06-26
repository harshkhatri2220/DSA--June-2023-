//Print name n timess
#include<iostream>
using namespace std;

void name(int i , int j)
{
    if(i>j)
    {
        return ;
    }
    cout<<i << " : harsh"<<endl;
    name(++i,j);
}
int main()
{
    int n=0;
    cout<<"enter how many times to print: ";
    cin>>n;
    name(1,n);
    return 0;
}