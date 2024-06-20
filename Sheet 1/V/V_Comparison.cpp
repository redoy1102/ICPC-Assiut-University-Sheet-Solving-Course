#include<bits/stdc++.h>
#define endl '\n'
#define long long int int
using namespace std;

void solve()
{
    int a, b;
    char ch;
    cin >> a >> ch >> b;
    if(ch == '=')
    {
        if(a == b)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
    }
    else if(ch == '<')
    {
        if(a < b)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
    }
    else{
        if(a > b)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
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