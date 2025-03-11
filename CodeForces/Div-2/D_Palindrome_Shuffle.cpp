// https://codeforces.com/contest/2069/problem/D

// Wrong answer on test 1


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a;
        cin >> a;
        int cnt = 0;

        for (int i = 0, j = a.size() - 1; i < j; i++, j--)
        {
            if (a[i] != a[j])
                cnt++;
        }

        cout << cnt << endl;
    }
    return 0;
}