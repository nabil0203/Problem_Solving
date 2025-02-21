// https://www.codechef.com/START174D/problems/HWFIN


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int a = 10 * y;
    int b = a + x;

    if(b>= 100)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}