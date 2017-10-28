#include<bits/stdc++.h>
#define MAX  100000


using namespace std;
/*
https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/lets-begin/description/
*/


void result(int n)
{
	int dp[MAX+1];
	int arr[4]={2,3,5,7};
	//memset(dp,MAX,sizeof dp);
/*	for(int i=1;i<=MAX;++i)
	{
		dp[i]=MAX;
	}*/
	dp[0]=0;
	for(int x=1;x<=MAX;++x)
	{
		dp[x]=MAX;
		for(int j =0;j<4;++j)
		{
			if(arr[j]<=x)
			{
				if(dp[x]>dp[x-arr[j]]+1)
				{
					dp[x] = dp[x-arr[j]]+1;
				}			
			}
		}
	}
	if(dp[n]==MAX)
	{
		cout<<"-1"<<endl;		
	}
	else
	{
		cout<<dp[n]<<endl;
	}
	
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin>>t;
   while(t--)
   {
   	int n;
   	cin>>n;
   	result(n);
   	
   }
   return 0;
}

