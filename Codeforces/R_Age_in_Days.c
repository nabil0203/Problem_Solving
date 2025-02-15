// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R

#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int y = n / 365;
    printf("%d years\n", y);

    int m1 = n % 365;

    int m = m1 / 30;
    printf("%d months\n", m);

    int d = m1 % 30;
    printf("%d days", d);

    return 0;
}