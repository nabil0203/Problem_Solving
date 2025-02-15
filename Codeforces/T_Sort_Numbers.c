// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

// both works

// #include <stdio.h>
// int main()
// {

//     int a, b, c, p, q, r, temp;
//     scanf("%d %d %d", &a, &b, &c);

//     p = a;
//     q = b;
//     r = c;

//     if (p > q)
//     {
//         temp = q;
//         q = p;
//         p = temp;
//     }
//     if (p > r)
//     {
//         temp = r;
//         r = p;
//         p = temp;
//     }
//     if (q > r)
//     {
//         temp = r;
//         r = q;
//         q = temp;
//     }

//     printf("%d\n%d\n%d\n\n", p, q, r);
//     printf("%d\n%d\n%d\n", a, b, c);

//     return 0;
// }



#include <stdio.h>
int main()
{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    { // a max
        if (b >= c)
        { // c min
            printf("%d\n%d\n%d", c, b, a);
        }
        else
            // b min
            printf("%d\n%d\n%d", b, c, a);
    }

    else if (b >= c && b >= a)
    { // b max
        if (c >= a)
        {
            // a min
            printf("%d\n%d\n%d", a, c, b);
        }
        else
            // c min
            printf("%d\n%d\n%d", c, a, b);
    }

    else
    { // c max

        if (b >= a)
        {
            // a min
            printf("%d\n%d\n%d", a, b, c);
        }
        else
            // b min
            printf("%d\n%d\n%d", b, a, c);
    }

    printf("\n\n%d\n%d\n%d", a, b, c);

    return 0;
}


