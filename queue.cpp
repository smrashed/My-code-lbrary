#include<iostream>
#include<queue>
using namespace std;

main()
{
    queue<int>q1;
    queue<int>q2;
    int a,i,n,b;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        q1.push(a);
    }
    for(i=1;i<n;i++)
    {
        //cout<<q1.front()<<" ";
        b=q1.front();
        q2.push(b);
        cout<<q2.front()<<" ";
        q2.pop();
        q1.pop();
    }

}
