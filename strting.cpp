#include<bits/stdc++.h>
using namespace std;

main()
{
    char a[101];
    string s;
    //cin>>s;
    getline(cin,s);
    cout<<s.size()<<endl;
    int i,j;
    for(i=0;i<s.size();)
    {
        if(s[i]!='.' && s[i]!='!' && s[i]!=' ' && s[i]!='?' && s[i]!='(' && s[i]!=')')
        {
            j=-1;
            while(s[i]!='.' && s[i]!='!' && s[i]!=' ' && s[i]!='?' && s[i]!='(' && s[i]!=')' && i<s.size())
            {
                a[++j]=s[i++];
            }
            a[j+1]='\0';
            string s2=string(a);
            //printf("%s ",a);
            cout<<a<<" ";
        }
        else
            i++;
    }
}
