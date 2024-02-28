#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int ar[3] = {a, b, c};

    int mx = ar[0];
    int mn = ar[0];

    for(int i = 1; i < 3; i++)
    {
        if(ar[i] > mx)
        {
            mx = ar[i];
        }
        if(ar[i] < mn)
        {
            mn = ar[i];
        }
    }
    cout << mn << " " << mx << endl;


    return 0;
}