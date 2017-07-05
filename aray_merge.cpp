/*#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long ara[10000] = {0}, ara2[10000] = {0}, k, i, j, l, p, n;
    scanf("%lld", &n);
    for (i = 0 ; i < n ; i++ )
    {
        cin >> ara[i];
    }
    for (i = 0 ; i < n ; i++ )
    {
        cin >> ara2[i];
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n + i; j++)
        {
            if (ara[j] > ara2[i])
            {
                p = n + i;
                for (k = p; k > j; k--)
                {
                    ara[k] = ara[k - 1];
                }
                ara[j] = ara2[i];
                break;
            }
            else if (ara[j] == ara2[i])
            {
                p = n + i;
                for (k = p; k > j; k--)
                {
                    ara[k] = ara[k - 1];
                }
                ara[j] = ara2[i];
                break;
            }
            else if (ara2[i] != ara[j])
            {
                p = n + i;
                ara[p] = ara2[i];
            }
        }
    }
    for (l = 0 ; l <= p ; l++)
    {
        cout << ara[l] << " ";
    }
    cout << endl;
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;

main()
{
    int aray[100]= {0},aray2[100]= {0},aray3[100]= {0},i,j,n,N=200,p,q,r;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&aray[i]);
    }
    aray[n]=N;
    for(i=0; i<n; i++)
    {
        scanf("%d",&aray2[i]);
    }
    aray2[n]=N;
    q=0;
    p=0;
    r=0;
    int cnt=0;
    while(1)
    {
        cnt++;
        if(aray[p]==aray2[q] && aray[p]==N)
            break;
        if(aray[p]<=aray2[q])
        {
            aray3[r]=aray[p];
            p++;

        }
        else
        {
            aray3[r]=aray2[q];
            q++;
        }
        r++;
    }
    for(i=0;i<r;i++)
    {
        cout<<aray3[i]<<" ";
    }
}
