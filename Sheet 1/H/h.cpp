#include<bits/stdc++.h>
using namespace std;

int main(){
    double a, b;
   cin >> a>>b;

   int f = floor(a / b);
   int c = ceil(a / b);
   int r = round(a / b);

    cout << "floor " << fixed << setprecision(0) << a << " / " << fixed << setprecision(0) << b << " = " << f << endl;
    cout << "ceil " << fixed << setprecision(0) << a << " / " << fixed << setprecision(0) << b << " = " << c << endl;
    cout << "round " << fixed << setprecision(0) << a << " / " << fixed << setprecision(0) << b << " = " << r << endl;
    return 0;
}