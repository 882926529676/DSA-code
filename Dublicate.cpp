
#include<iostream>
#include<limits.h>
using namespace std;

void dublicate(int array)
{
    int n=sizeof(array);
    for(int i=0;i<n;i++)
    {
        for(int j=i-1;j<n;j++)
        {
            if(array(i)==array(j))
            {
                return true ;
            }
        }
    }
}
int main()
{
    int array={1,3,4,2,1,4,3};
    cout<<"Result is : "<<( dublicate(array)?"true":"false")<<endl;
    return 0;
}