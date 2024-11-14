
#include<iostream>
#include <limits.h>
#include<vector>
using namespace std;

// class solution{
//     public:
//     int SubArraySum(vector<int>a)
//     {
//         int maxsum=INT_MIN;
//         int curr_sum=0;

//         for(int i=0;i<a.size;i++)
//         {
//             curr_sum=max(curr_sum+a[i]);
//             maxsum=max(maxsum,curr_sum);
//         }
//         return maxsum;
//     }
// }


int main() {
   // vector<int> vec = { -2, -3, 4, -1, -2, 1, 5, -3 };
    // cout << "Maximum contiguous sum is " 
    //      <<  SubArraySum(a);

    //vec[6]= 7;  wrong method to insert value in vector. use push_back() method
    vector <int> vec = {1,2,3,4,5,6};
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    cout<<vec.size()<< endl;
    for(int i=0; i< vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    int n;
    cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++)
    // {
    //     cin>>arr[i];
    // } 
    int temp;
    for(int i=0; i<n; i++)
    {
        cin>>temp;
        vec.push_back(temp);
    }

    for(int i=0; i< vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout<<endl;

    vec.pop_back();
    for(int i=0; i< vec.size(); i++)
    {
        cout << vec[i] << " ";
    }

    return 0;
}