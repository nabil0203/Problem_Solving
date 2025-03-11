// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)                 // this loop is for how many numbers I want to calculate
    {

        long long int x, fact = 1;               // long long because the result of factorial 18,19,20 can't stored by int data type
        scanf("%lld", &x);

        if (x == 0)                             // if the input is 0
        {
            printf("1\n");
            continue;
        }
       

        for (int i = 1; i <= x; i++)                // calculating factorial
        {
            fact = i * fact;
        }

        printf("%lld\n", fact);
    }

    return 0;
}