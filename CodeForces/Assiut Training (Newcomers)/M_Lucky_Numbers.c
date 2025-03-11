// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M


// bomb marleo bujha possible naaaaaaaaaa

#include <stdio.h>
int main()
{

    int a, b, i, rem, count = 0;
    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++)
    {
        int digit = i;
        int num = i;
        int flag = 0;
        while (digit != 0)
        {
            rem = digit % 10;
            if (rem != 4 && rem != 7)
            {
                flag++;
                break;
            }
            digit = digit / 10;
        }

        if (flag == 0)
        {
            printf("%d ", num);
            count++;
        }
    }

    if (count == 0)
    {
        printf("-1");
    }

    return 0;
}