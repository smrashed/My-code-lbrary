/*#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	map<string,int> count;
	string st;
	//for (int i = 0; i < n; ++i)
	while(cin>>st)
	{
		count[st]++;
	}
	map<string, int> ::iterator rashed;
    for(rashed = count.begin(); rashed != count.end(); rashed++)
    {
    	cout<< rashed->first << "=" <<rashed->second<<endl;
    }
	return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	std::map<string, int> legend;
	int count, i, marks;
	string s;
	cin >> count;
	for (i = 1; i <= count; ++i)
	{
		cin >> s >> marks;
		legend[s] = marks;
	}
	cout << endl;
	std::map<string, int> ::iterator it;
	for (it = legend.begin(); it != legend.end(); it++)
	{
		cout << it->first <<  "="  << it->second << endl;
	}
	return 0;
}*/
// map::value_comp
/*#include<bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;
int main ()
{
  std::map<string,int> mymap;
  int i,v,a,b,c;
  for(i=1;i<=5;i++)
  {
      string s;
      cin>>s;
      cin>>a>>b>>c;
      v=a*b*c;
      mymap[s]=v;
  }

  std::cout << "mymap contains:\n";

  std::pair<string,int> highest = *mymap.rbegin();          // last element

  std::map<string,int>::iterator it = mymap.begin();
  do {
    std::cout << it->first << " => " << it->second << '\n';
  } while ( mymap.value_comp()(*it++, highest) );

  return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	std::map<int, int> mp;
    int a;
	while(cin>>a)
	{
	    mp[a]++;
	}
	std::map<int, int> ::iterator it;
	for (it = mp.begin(); it != mp.end(); it++)
	{
		cout << it->first <<  "="  << it->second << endl;
	}
	return 0;
}
