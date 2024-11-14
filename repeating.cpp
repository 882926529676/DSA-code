

#include<iostream>

using namespace std;

int set_repeat(int array[], int array_size)
{
    int i,j;
    for(int i=0 ;i<array_size; i++)
    {
        for(int j=i+1 ; i<array_size; j++)\
        {
            if(array[i]==array[j])
            {
                cout<<array[i]<<" ";
                break;
            }
        }
    } 

}

int main()
{
    int array[]={4,5,3,3,1};
    int array_size=sizeof(array)/sizeof(array[0]);
    cout<<set_repeat(array,array_size);
    return 0;
}