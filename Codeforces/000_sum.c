// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K

#include <stdio.h>
int main()
{

    int n, sum = 0;
    scanf("%d", &n);

    int x[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x[i]);
        sum = sum + x[i];
    }

    printf("%d", sum);
    return 0;
}