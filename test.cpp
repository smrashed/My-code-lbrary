/*#include <bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[])
{
	int sum=0;
	for (int i = 1; i <argc; ++i)
	{

		sum+=atoi(argv[i]);
	}
	cout<<sum<<endl;
	return 0;
}*/
/*#include "bits/stdc++.h"
using namespace std;

main()
{
	string s;
	char a[100],b[100];
	int i,k,j,m,n=-1;
	getline(cin,s);
	for(i=0;;i++)
	{
		a[i]=s[i];
		if(s[i]==' ')
		{
			k=i;
			break;
		}
    }
    a[k]='\0';
    string st=string(a);
    //cout<<st;
    //printf("%s\n",a);
    for(j=k+1;;j++)
	{
		b[++n]=s[j];
		if(s[j]=='\0')
		{
			//m=j;
			break;
		}
    }
    b[n+1]='\0';
    string str=string(b);
    //printf("%s\n",b);
}*/
// resizing vector
/*#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector;

  // set some initial content:
  for (int i=1;i<10;i++) myvector.push_back(i);

  myvector.resize(5);
  myvector.resize(8,10);
  myvector.resize(12);

  std::cout << "myvector contains:";
  for (int i=0;i<myvector.size();i++)
    std::cout << ' ' << myvector[i];
  std::cout << '\n';

  return 0;
}*/
/*#include <iostream>
#include <vector>
using namespace std;
main()
{
	std::vector<int> v;
	int n, i,a;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	for (i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
}*/
/*#include<bits/stdc++.h>
#include<math.h>

using namespace std;

main()
{
    long long test,i;
    double xA,xB,xC,A,B,C,a,b,c;
    scanf("%lld",&test);
    for(i=1;i<=test;i++){
        scanf("%lf %lf %lf",&a,&b,&c);
        xA=((a*a)+(b*b)-(c*c))/(2*a*b);
        xB=((b*b)+(c*c)-(a*a))/(2*b*c);
        xC=((a*a)+(c*c)-(b*b))/(2*a*c);
        A=(acos(xA)*180)/M_PI;
        B=(acos(xB)*180)/M_PI;
        C=(acos(xC)*180)/M_PI;
        if(A==90 || B==90 || C==90){
            printf("Case %lld: yes",i);
        }
        else{
           printf("Case %lld: no",i);
        }
        cout<<"\n";
    }
}*/
/*#include<bits/stdc++.h>
#include <iomanip>
using namespace std;

main()
{
    int x=5;
    x=2/5;;
    cout<<x;
    cout << fixed << setprecision(1) << 9.09090901 << endl;*/
//double x=13.00;
//cout<<x/10.00;

//}*/
/*#include<iostream>
#include <algorithm>
#include <string>

main()
{
    std::string data = "Memory";
    std::transform(data.begin(), data.end(), data.begin(), ::tolower);
    std::cout<<data;
}*/
//*****************S.M.Rashedul Islam***************//
//******Dept.of Computer Science & Engineering******//
//************Islamic University,Kushtia************//
/*#include<bits/stdc++.h>
#include<string>
#include<cstring>
#include<sstream>
#include<iostream>
#include<algorithm>



using namespace std;
main()
{

    /*char ch[101]={'1'};
    printf("%c",ch[0]-7);*/
/*int n,k,r,c,j=-1;
int ch[1001];
cin>>n;
while(n!=0)
{
    r=n%10;
    //k=k*10+r;
    ch[++j]=r;
    n=n/10;
}
for(k=0; k<=j; k++)
{
    cout<<ch[k];
}*/
/* int c;
 char a='a';
 c=(int)a;
 cout<<c;*/
/*int n=0;
stringstream ss;
ss<<n<<endl;
string s=ss.str();
cout<<s<<endl;*/
/*string str1("100");
string str2(str1);
reverse(str2.begin(), str2.end());
cout<<str2;
}*/
/*#include<bits/stdc++.h>
using namespace std;

main()
{
    char s[100];
    //cin>>s;
    int i;
    for(i=0;i<1;i++)
    {
        s[i]='-1';
    }
    s[i+1]='\0';
    cout<<atoi(s);
}*/
#include<bits/stdc++.h>

using namespace std;



void seive()
{
    k = -1;
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
    long long ar[100000]={0},k1=-1;
    cin>>n;
    for(i=2; i<=sqrt(n); i++)
    {
        if(check[i]==0)
        {
            if(n%i==0)
            {
               while(n%i==0)
                {
                    //cout<<i<<" ";
                    ar[++k1]=i;
                    //cout<<i<<" ";
                    n=n/i;
                }
            }
        }
    }
    if(check[n]==0)
        ar[++k1]=n;
    for(j=0;j<=k1;j++)
    {
        //cout<<ar[j]<<" ";

    }
}


