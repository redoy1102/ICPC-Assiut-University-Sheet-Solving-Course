#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n;  cin>>n;
//     int *nums = new int[n];     // dynamic memory

//     for(int i = 0; i < n; i++)
//     {
//         cin>>nums[i];
//     }

//     int mx = *max_element(nums, nums+n);
//     cout<<mx<<endl;
//     delete[] nums;

//     return 0;
// }
int main(){
    int n;
    cin>>n;

    int ar[n];
    for(int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    
    int mx = INT_MIN;
    for(int i = 1; i < n; i++)
    {
        mx = max(ar[i], mx);
    }
    cout<<mx<<endl;
    return 0;
}