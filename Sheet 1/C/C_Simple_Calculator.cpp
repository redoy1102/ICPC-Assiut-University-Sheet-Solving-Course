#include<bits\stdc++.h>
using namespace std;
int main(){
    long long x, y;
    cin >> x >> y;

    long long sum = x+y;
    long long sub = x - y;
    long long m = x * y;

    cout << x << " + " << y << " = " << sum << endl;
    cout << x << " * " << y << " = " << m << endl;
    cout << x << " - " << y << " = " << sub << endl;

    return 0;
}