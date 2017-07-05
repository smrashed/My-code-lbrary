//process 1
#include <bits/stdc++.h>
using namespace std;

main()
{
	int aray[100],i,n,j,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&aray[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if (aray[j]>aray[j+1])
			{
				temp=aray[j];
				aray[j]=aray[j+1];
				aray[j+1]=temp;
			}
		}
	}
	for(i=n-1;i>=0;i--){
		if(aray[i-1]<aray[i]){
			cout<<aray[i-1]<<endl;
			break;
		}
	}
}
//process 2
#include <bits/stdc++.h>
using namespace std;

main()
{
	int aray[100],i,n,j,temp,d,a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&aray[i]);
	}
	int max=0,min=100;
	for(i=0;i<n;i++)
	{
		if (aray[i]>max)
		{
			max=aray[i];
		}
	}
	for(i=0;i<n;i++)
	{
		d=max-aray[i];
		if (d>0)
		{
			if (d<min)
			{
				min=d;
				a=aray[i];
			}
		}
	}
	cout<<a<<endl;
}
//process 3
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int aray[100],i,n,j,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&aray[i]);
	}
	int max=0,min=100;
	for(i=0;i<n;i++)
	{
		if (aray[i]>max)
		{
			max=aray[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if (max==aray[i])
		{
			aray[i]=0;
		}
	}
	int maxx=0;
	for(i=0;i<n;i++)
	{
		if (aray[i]>maxx)
		{
			maxx=aray[i];
		}
	}
	cout<<maxx<<endl;
	return 0;
}
