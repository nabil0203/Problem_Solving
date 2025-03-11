// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

#include <stdio.h>
#include <limits.h>
int main()
{
    int n, a, max = INT_MIN;
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a > max)
        {
            max = a;
        }
    }
 
    printf("%d", max);
 
    return 0;
}