// https://codeforces.com/contest/2072/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, p;
        cin >> n >> k >> p;

        int high = n * p;
        int low = n * (-p);

        if (k > high || k < low)
            cout << -1 << endl;
        else
        {
            int z = abs(k) / p;

            if (abs(k) == p * z)
                cout << z << endl;
            else
                cout << z + 1 << endl;
        }
    }
    return 0;
}






/*

my first code---->


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, p;
        cin >> n >> k >> p;

        if (abs(k) == 0)
        {
            cout << 0 << endl;
        }

        if (abs(k) % p == 0)
        {
            cout << abs(k) / p << endl;
        }

        if (abs(k) > n * p)
        {
            cout << -1 << endl;
        }

        else
        {
            cout << (abs(k) / p) + 1 << endl;
        }
    }

    return 0;
}

*/