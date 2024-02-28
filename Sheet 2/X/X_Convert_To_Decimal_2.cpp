#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;  cin>>n;
    int ones = 0;
    while(n != 0){
        int remainder = n % 2;
        if(remainder == 1){
            ones++;
        }
        n /= 2;
    }
    int p = 0;
    int decimal = 0;
    while(ones--){
        decimal += pow(2, p);
        p++;
    }
    cout << decimal << endl;
}
int main(){
    int t;
    cin >> t;
    // t = 1;
    while(t--){
        solve();
    }

    return 0;
}