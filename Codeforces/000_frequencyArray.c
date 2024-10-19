// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

#include <stdio.h>
int main()
{

    int n, m, i;
    scanf("%d %d", &n, &m);

    int a[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 1; i <= m; i++)
    {
        int count = 0;

        if (a[i] >= 1 && a[i] <= m)
        {
            for (int i = 1; i <= m; i++)
            {
                if (a[i] == i)
                {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }

    return 0;
}