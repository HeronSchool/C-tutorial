// baekjoon #1850
// problem1850.c

#include <stdio.h>
long gcd(long u, long v)
{
    long t; // long : 8 bytes
    while (u > 0)
    {
        if (v > u)
        {
            t = v;
            v = u;
            u = t;
        } // u > v

        //u = u - v;
        u %= v; // for speed
    }

    return v;
}

main()
{
    long x, y, z;
    scanf("%ld %ld", &x, &y);
    z = gcd(x, y);

    for(long i = 0; i < z; i++)
    {
        printf("1");
    }
}
