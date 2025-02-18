// https://codeforces.com/contest/2069/problem/A

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
        if (n < 3)
        {
            cout << "NO" << endl;
            continue;
        }

        vector<int> b(n - 2);
        for (int i = 0; i < n-2; i++)
        {
            cin >> b[i];
        }

        if (b.empty())
        {
            cout << "NO" << endl;
            continue;
        }

        // for (int i = 2; i <= n - 1; i++)
        // {
        //     cout << b[i] << " ";
        // }
        // cout << endl;


        
        // vector<int> a(n, 1);                    // initialing all value as 1

        bool flag = false;

        for (int i = 0; i < n - 4; i++)
        {
            if (b[i] == 1 && b[i + 1] == 0 && b[i + 2] == 1)
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}