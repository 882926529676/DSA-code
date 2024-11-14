

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int missing_number(int n, vector <int>array)
{
    vector<int> hash (n+1,0);
    for(int i=0; i<n-1; i++)
    {
        hash[array[i]]++;
    }

    for(int i=1; i<n; i++)
    {
        if(hash[i]==0)
        {
            return i;
        }
    }
    return -1 ;
}
int main()
{
    vector<int>array={1,2,3,4,5,7};
    int n=5;
    cout<< missing_number(n,array); 

}

