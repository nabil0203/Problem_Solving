// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K

#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int x[n], sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%1d", &x[i]);
        sum += x[i];
    }
    printf("%d", sum);

    return 0;
}