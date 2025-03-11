// https://codeforces.com/contest/2044/problem/C

// didn't passed all the test case



#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;
 
        if (m < a)
        {
            cout << (a - m) + (b + c);
        }
        else if (m == a)
        {
            cout << b + c;
        }
        else
            cout << a + b + c;
        cout << endl;
    }
 
    return 0;
}