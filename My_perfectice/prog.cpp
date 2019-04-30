#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][n];
	int r=n-1,k=1,i,j,l=0;
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			for(j=0;j<n;j++)
			{
				a[l][j]=k;
				k++;
			}
			l++;
		}
		else
		{
			for(j=0;j<n;j++)
			{
				a[r][j]=k;
				k++;
			}
			r--;
			
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			cout<<a[i][j]<<" * ";
		}
		cout<<a[i][n-1];
		cout<<endl;
	}
	cout<<endl;
	return 0;
}

//sample input and output.

//n=5

//1 * 2 * 3 * 4 * 5
//11 * 12 * 13 * 14 * 15
//21 * 22 * 23 * 24 * 25
//16 * 17 * 18 * 19 * 20
//6 * 7 * 8 * 9 * 10

//n=4

//1 * 2 * 3 * 4
//9 * 10 * 11 * 12
//13 * 14 * 15 * 16
//5 * 6 * 7 * 8
