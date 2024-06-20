#include<bits/stdc++.h>
#define endl '\n'
#define long long int int
using namespace std;

void solve()
{
    int x;
    cin>>x;

    int firstDigit = x / 1000;

    if(firstDigit %2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else{
        cout << "ODD" << endl;
    }
}
int main()
{
    int t;
    // cin >> t;
    t = 1;
    while(t--)
    {
        solve();
    }

    return 0;
}