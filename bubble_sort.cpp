#include <bits/stdc++.h>
using namespace std;

main()
{
    int aray[100],i,n,j,temp,k;
    cout<<"Enter the number of test case"<<":"<<endl;
    scanf("%d",&n);
    cout<<"Please give your input"<<":"<<endl;
    for(i=0; i<n; i++)
    {
        scanf("%d",&aray[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if (aray[j]>aray[j+1])
            {
                temp=aray[j];
                aray[j]=aray[j+1];
                aray[j+1]=temp;
            }
        }
    }
    cout<<"bubble sort"<<":"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<aray[i]<<" ";
    }
}
