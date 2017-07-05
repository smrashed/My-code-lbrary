#include <bits/stdc++.h>
using namespace std;

main()
{
	int count[101]={0},i,n,aray[101]={0},j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&aray[i]);
		count[aray[i]]++;
	}
	for(i=0;i<=100;i++)
	{
		if (count[i]!=0)
		{
			cout<<i<<" "<<count[i]<<endl;
		}
	}
}