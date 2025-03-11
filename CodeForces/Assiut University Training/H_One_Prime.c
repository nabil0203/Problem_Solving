// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

#include <stdio.h>
int main()
{

    int x, count = 0;
    scanf("%d", &x);

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}