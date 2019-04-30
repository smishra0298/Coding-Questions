#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[2*n-1][2*n-1];
		int m=(2*n-1);
		int k=1;
		int val=n;
		for(int i=0;i<n;i++)
		{
			if(k==1)
			{		
				for(int j=i;j<m;j++)
				{
					a[i][j]=val;
				}
				k++;
			}
			if(k==2)
			{
				for(int j=i;j<m;j++)
				{
					a[j][m-1]=val;
				}
				k++;
			}
			if(k==3)
			{
				for(int j=m-1;j>=i;j--)
				{
					a[m-1][j]=val;
				}
				k++;
			}
			if(k==4)
			{
				for(int j=m-1;j>=i;j--)
				{
					a[j][i]=val;
				}
				k++;
			}
			k=1;
			m--;
			val--;
		}
		m=(2*n-1);
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	cout<<endl;
	return 0;
}

//sample input and output.

//n=3

//3 3 3 3 3
//3 2 2 2 3
//3 2 1 2 3
//3 2 2 2 3 
//3 3 3 3 3

//n=2

//2 2 2 
//2 1 2
//2 2 2

//n=1

//1
