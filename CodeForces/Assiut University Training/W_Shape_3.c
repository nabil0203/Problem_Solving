// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W

#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);


    // pyramid
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    // reverse pyramid
    // same as the normal pyramid, just changed in the first loop 
    for (int i = n; i >= 1; i--)
    {

        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}