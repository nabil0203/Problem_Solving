// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N

#include <stdio.h>
int main()
{
 
    char x;
    scanf("%c", &x);
 
    if (x >= 'A' && x <= 'Z')
    {
        printf("%c", x + 32);
    }
 
    else if (x >= 'a' && x <= 'z')
    {
        printf("%c", x - 32);
    }
 
    return 0;
}