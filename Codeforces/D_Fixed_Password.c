// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D

#include <stdio.h>
int main()
{
    int n;
 
    while (1)
    {
        scanf("%d", &n);
        if (n == 1999)
        {
            printf("Correct\n");
            break;
        }
 
        else
            printf("Wrong\n");
    }
 
    return 0;
}