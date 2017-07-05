#include <bits/stdc++.h>
#define M 60005
using namespace std;

long long aray[M], check[M], i, j, k;

void seive()
{
    k = 0;
    for (i = 3; i <= sqrt(M); i = i + 2)
    {
        if (check[i] == 0)
        {
            for (j = i * i; j <= M - 1; j = j + i)
            {
                check[j] = 1;
            }
        }
    }
    aray[0]=-1;
    for (i = 2; i <= M - 1; i++)
    {
        if (i != 2 && i % 2 == 0)
        {
            check[i] = 1;
        }
        if (check[i] == 0)
        {
            aray[++k] = i;
        }
    }
}
main()
{
    seive();
    long long high, high1, mid, mid1, low, low1, pos, pos1, m, n, rng, flag, flag1;
    scanf("%lld", &rng);
    for (long long x = 1; x <= rng; x++)
    {
        scanf("%lld %lld", &m, &n);
        high = k;
        high1 = k;
        low = 1;
        low1 = 1;
        if (m > n)
        {
            swap(m, n);
        }
        for (i = 0; i <= k; i++)
        {
            mid = (high + low) / 2;
            if (aray[mid] < m)
            {
                low = mid + 1;
                if (aray[low] > m)
                {
                    pos = mid;
                    break;
                }
            }
            else if (aray[mid] == m)
            {
                pos = mid;
                break;
            }
            else if (aray[mid] > m)
            {
                high = mid - 1;
            }
        }
        for (i = 0; i <= k; i++)
        {
            mid1 = (high1 + low1) / 2;
            if (aray[mid1] < n)
            {
                low1 = mid1 + 1;
                if (aray[low1] > n)
                {
                    pos1 = mid1;
                    break;
                }
            }
            else if (aray[mid1] == n)
            {
                pos1 = mid1;
                break;
            }
            else if (aray[mid1] > n)
            {
                high1 = mid1 - 1;
            }
        }
        if((aray[pos]==m && aray[pos1]==n) || aray[pos]==m )
        {
            printf("Case %lld: %lld\n", x, (pos1 - pos)+1);
        }
        else
        {
            printf("Case %lld: %lld\n", x, (pos1 - pos));
        }
    }
}
