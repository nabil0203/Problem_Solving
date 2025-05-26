// https://codeforces.com/contest/2114/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int s;
        cin >> s;

        int b = sqrt(s);

        // cout << b << endl;
        if (b * b == s)
        {
            cout << 0 << " " << b << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}