// https://codeforces.com/contest/4/problem/A


#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);

    if (x == 2)
    {
        printf("NO");
    }

    else if (x % 2 == 0)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}