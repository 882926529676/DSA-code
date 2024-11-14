
#include<iostream>
using namespace std;

void reverse_array(int array[],int size)
{
    int reverse[size];
    for(int i=0;i<size;i++)
    {
        reverse[i]=array[size-i-1];
    }
    cout<<"reversed array is : "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<reverse[i]<<" ";
    }
} 
int main()
{
    int array[]={2,4,7,5,6,8};
    int size=sizeof(array)/sizeof(array[0]);
    reverse_array(array,size);
}