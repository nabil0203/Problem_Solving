// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L

#include <stdio.h>
 
int main()
{
    char f1[100], s1[100], f2[100], s2[100];
    
    scanf("%s %s", f1, s1);                // no ampersand(&) needed
    scanf("%s %s", f2, s2);                // no ampersand(&) needed
 
    if (strcmp(s1, s2) == 0)                // cant do (s1==s2), because string can't be compared like int/float
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }
 
    return 0;
}