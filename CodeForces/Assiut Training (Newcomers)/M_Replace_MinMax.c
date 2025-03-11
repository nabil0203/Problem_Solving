// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

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

    int max = x[0], min = x[0];
    int max_index = 0, min_index = 0;

    for (int i = 0; i < n; i++)
    {
        if (x[i] > max)
        {
            max = x[i];
            max_index = i;
        }
        if (x[i] < min)
        {
            min = x[i];
            min_index = i;
        }
    }

    int temp = x[max_index];
    x[max_index] = x[min_index];
    x[min_index] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }

    return 0;
}