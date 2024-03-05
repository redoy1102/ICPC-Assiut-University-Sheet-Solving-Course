#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cin >> ch;
    int num = ch;

    if(num >= 48 && num <= 57)
    {
        cout << "IS DIGIT\n";
    }
    else if(num >= 65 && num <= 90)
    {
        cout<<"ALPHA\nIS CAPITAL\n";
    }
    else if(num >= 97 && num <= 122)
    {
        cout<<"ALPHA\nIS SMALL\n";
    }

    return 0;
}