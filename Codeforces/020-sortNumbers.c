// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

#include <stdio.h>
int main()
{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    { // a max
        if (b >= c)
        { // c min
            printf("%d\n%d\n%d", c, b, a);
        }
        else
            // b min
            printf("%d\n%d\n%d", b, c, a);
    }

    else if (b >= c && b >= a)
    { // b max
        if (c >= a)
        {
            // a min
            printf("%d\n%d\n%d", a, c, b);
        }
        else
            // c min
            printf("%d\n%d\n%d", c, a, b);
    }

    else
    { // c max

        if (b >= a)
        {
            // a min
            printf("%d\n%d\n%d", a, b, c);
        }
        else
            // b min
            printf("%d\n%d\n%d", b, a, c);
    }

    printf("\n\n%d\n%d\n%d", a, b, c);

    return 0;
}