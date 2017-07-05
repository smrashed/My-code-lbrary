#include<bits/stdc++.h>
using namespace std;

main()
{
    string s;
    char s2[101];
    int i,j,k,p=0,q,m,sum;
    cin>>s;
    for(i=0; i<s.size();  )
    {
        j=-1;
        //q=j;
        //i=i+p;
        if(s[i]>='0' && s[i]<='9')
        {
            k=i ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   ;
            while(s[i]>='0' && s[i]<='9' && i<s.size())
            {
                s2[++j]=s[i++];
            }
            s2[j+1]='\0';
            p=j+1;
            cout<<s2<<endl;
            //string s3=string(s2);
            //puts(s2);
            /*sum=0;
            for(m=0;m<=strlen(s2);m++)
            {
                char s3[101];
                s3[0]=s2[m];
                s3[1]='\0';
                sum+=atoi(s3);
            }
            cout<<sum<<endl;*/
            cout<<atoi(s2)<<endl;
        }
        else
            i++;
        //cout<<endl;
       // sum=atoi(s2);
        //cout<<sum;
        //printf("%d",sum);
        cout<<endl;
    }
}
