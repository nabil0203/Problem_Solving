// https://codeforces.com/contest/2065/problem/B


// both works


// #include <bits/stdc++.h>
// using namespace std;
 
// int main()
// {
//     int t;
//     cin >> t;
 
//     while (t--)
//     {
//         string s;
//         cin >> s;
 
//         int flag = 0;
 
//         for (int i = 1; i < s.size(); i++)
//         {
//             if (s[i] == s[i - 1])
//             {
//                 cout << 1 << endl;
//                 flag++;
//                 break;
//             }
//         }
//         if (flag == 0)
//             cout << s.size() << endl;
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        string s;
        cin >> s;
 
        int flag = 0;
 
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == s[i + 1])
            {
                cout << 1 << endl;
                flag++;
                break;
            }
        }
        if (flag == 0)
            cout << s.size() << endl;
    }
    return 0;
}