// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

#include <stdio.h>
int main()
{

    int a, b, c, p, q, r, temp;
    scanf("%d %d %d", &a, &b, &c);

    p = a;
    q = b;
    r = c;

    if (p > q)
    {
        temp = q;
        q = p;
        p = temp;
    }
    if (p > r)
    {
        temp = r;
        r = p;
        p = temp;
    }
    if (q > r)
    {
        temp = r;
        r = q;
        q = temp;
    }

    printf("%d\n%d\n%d\n\n", p, q, r);
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}