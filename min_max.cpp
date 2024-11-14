

#include <iostream>
#include <limits.h>
 
using namespace std;

int set_min(int array[],int n)
{
    int mini=INT_MAX ; 
    for(int i=0;i<n;i++)
    {
        if(array[i]< mini)
        {
            mini=array[i];
        }
    }
    return mini;
}

int  set_max (int array[],int n)
{
    int max =INT_MIN ;
    for(int i=0;i<n;i++)
    {
        if(array[i]> max)
        {
            max=array[i];
        }
    }
    return max;
}

int main()
{
    int array[]={2,3,4,1,7,5};
    int n=6;
    cout<<"Maximum number : "<<set_max(array,n)<<endl;
    cout<<"Minimum number : "<<set_min(array,n)<<endl;
    
}