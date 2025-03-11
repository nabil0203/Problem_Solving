// https://codeforces.com/contest/2072/problem/B

// didn't solve


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int h = 0, u = 0;

        for (char c : s)
        {
            if (c == '-')
            {
                h++;
            }
            if (c == '_')
            {
                u++;
            }
        }

        cout << (h * h) / (4 * u) << endl;
    }

    return 0;
}