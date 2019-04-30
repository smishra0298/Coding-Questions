#include<iostream>
using namespace std;
int count(int n)
{
	int i=1;
	if(n==1)
		return 0;
	if(n==2)
		return 1;
	if(n%2!=0)
		return i+count(n-1);
	else
		return i+count(n/2);
}
int main()
{
	int t,x,c;
	cin>>t;
	while(t--)
	{
		cin>>x;
		c=count(x);
		cout<<c<<endl;
	}
	return 0;
}
