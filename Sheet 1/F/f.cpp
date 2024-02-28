#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, m;
    cin >> n>>m;

    int res = (n % 10) + (m % 10);

    cout << res << endl;
    return 0;
}