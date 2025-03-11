// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F

#include <stdio.h>
int main()
{

    long long int n, m;
    scanf("%lld %lld", &n, &m);

    long long int n1 = n % 10;
    long long int m1 = m % 10;

    printf("%lld", n1 + m1);

    return 0;
}