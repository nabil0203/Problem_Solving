// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S

#include <stdio.h>
int main()
{

    int n, x, y;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        scanf("%d %d", &x, &y);

        if (x > y)
        {
            int temp = 0;
            temp = y;
            y = x;
            x = temp;
        }

        for (int j = x + 1; j < y; j++)
        {
            if (j % 2 != 0)
            {
                sum += j;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}