// https://codeforces.com/problemset/problem/2061/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s = 0, point = 0;
        cin >> n;

        // while (n--)
        // {
        //     int a;
        //     cin >> a;

        //     s = a + s;

        //     if (s % 2 == 0)
        //     {
        //         point++;
        //     }

        //     s = s / 2;
        // }

        vector<int> v(n);
        while (n--)
        {
            int a;
            v.push_back(a);
        }

        for (auto i : v)
        cout << i << " ";
        
    }

    return 0;
}