#include <bits/stdc++.h>
using namespace std;

int main() {
    string num1, num2;
    cin >> num1 >> num2;
    int n = num1.length();
    string res = "";
    for(int i=0; i<n; i++)
    {
        if(num1[i] != num2[i])
        {
            res += '1';
        }
        else
        {
            res += '0';
        }
    }
    cout << res << endl;
    return 0;
}
