#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,f=0;
	cin>>n;
	int a[n][n];
	int mx[n],mn[n];
	int k1,k2;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		k1=INT_MAX;
		k2=INT_MIN;
		for(int j=0;j<n;j++)
		{
			k1=min(a[i][j],k1);
			k2=max(a[j][i],k2);
		}
		mn[i]=k1;
		mx[i]=k2;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(mn[i]==mx[j] && a[i][j]==k1)
			{
				cout<<mn[i];
				f=1;
			}
		}
	}
	if(f==0)
	{
		cout<<-1;
	}
	cout<<endl;
	return 0;
}

//For Question please refer My perfectice folder under Programs(DEV c).

//sample input and output.

//n=3

//1 2 3
//4 5 6
//7 8 9

//7

//n=3

//1 2 3
//4 5 6
//2 8 9

//-1
