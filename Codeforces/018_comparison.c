// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

#include <stdio.h>
int main()
{

    int a, b;
    char s;
    scanf("%d %c %d", &a, &s, &b);

    if (s == '>')
    {
        if (a > b)
        {
            printf("Right");
        }
        else if (b > a)
        {
            printf("Wrong");
        }

        else
            printf("Wrong");
    }

    if (s == '<')
    {
        if (a < b)
        {
            printf("Right");
        }
        else if (b < a)
        {
            printf("Wrong");
        }
        else
            printf("Wrong");
    }

    if (s == '=')
    {
        if (a == b)
        {
            printf("Right");
        }
        else if (a != b)
        {
            printf("Wrong");
        }
    }

    return 0;
}