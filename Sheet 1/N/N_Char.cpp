#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cin >> ch;
    int ascii = ch;
    if(ascii >= 97 && ascii <= 122)
    {
        int res = ascii - 32;
        printf("%c\n", res);
    }
    else if(ascii >= 65 && ascii <= 90)
    {
        int res = ascii + 32;
        printf("%c\n", res);
    }

    return 0;
}