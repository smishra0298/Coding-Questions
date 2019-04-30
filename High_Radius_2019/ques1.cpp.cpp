#include<iostream>
#include<list>
#include<string>
#include<set>
using namespace std;
int main()
{
	int x=0,n;
	set<char> s1,s2;
	char s[10]={'0','1','2','3','4','5','6','7','8','9'};
	cin>>n;
	string str[n];
	for(int i=0;i<n;i++)
		cin>>str[i];
	for(int i=0;i<10;i++)
		s1.insert(s[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			s2.insert(str[i].begin(),str[i].end());
			s2.insert(str[j].begin(),str[j].end());
			if(s1==s2)
				x++;
			s2.clear();
		}
	}
	cout<<x<<endl;
	return 0;
}
