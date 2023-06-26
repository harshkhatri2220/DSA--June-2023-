#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> v ={ {1, 3}, {2, 6}, {8, 10}, {15, 18} };
    vector<vector<int>> vs;
    
     for(int i=0 ; i<v.size() ; i++)
        {
            if(((v[i+1][0]) - (v[i][1])) <= 1)
            {
                vs.push_back({v[i][0],v[i+1][1]});
                i++;                
            }
            else
            {
                vs.push_back({v[i][0],v[i][1]});
            }
        }
        for(int i=0 ; i<vs.size() ; i++)
        {
            for(int j=0 ; j<2 ;j++)
            {
            cout<<v[i][j];
            }
        }
        for(int i=0 ; i<vs.size() ; i++)
        {
            for(int j=0 ; j<2 ;j++)
            {
            cout<<vs[i][j];
            }
        }
}