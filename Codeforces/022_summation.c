// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G

#include <stdio.h>
int main()
{

    long long int x;
    scanf("%lld", &x);
    long long int sum = ((x + 1) * x) / 2;

    // loop wont work for time limit
    
    /* long long int sum = 0;
     for (int i = 1; i <= x; i++)
     {
         sum += i;
     }
     */

    printf("%lld", sum);

    return 0;
}