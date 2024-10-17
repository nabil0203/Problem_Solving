// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J

#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int x[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    int min = x[0], count = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] < min)
        {
            min = x[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (x[i] == min)
        {
            count++;
        }
    }

    if (count % 2 != 0)
    {
        printf("Lucky");
    }
    else
        printf("Unlucky");

    return 0;
}