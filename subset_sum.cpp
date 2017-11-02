#include<bits/stdc++.h>

using namespace std;

bool subset_sum(int set[],int n,int sum)
{
	bool dp[n+1][sum+1];
	for(int i=0;i<=n;++i)
	{
		
		for(int j=0;j<=sum;++j)
		{
			if(i==0)
		    {
			    dp[0][j] = false;
		    }
			if(j==0)
			{
				dp[i][0]= true;
			}
			if(j<set[i-1])
			{
				dp[i][j]=dp[i-1][j];
			}
			if(j>=set[i-1])
			{
				dp[i][j]=dp[i-1][j]||dp[i-1][j-set[i-1]];
			}
		}
	}
	return dp[n][sum];
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin>>n;
   int set[n];
   for(int i=0;i<n;++i)
   {   	
   	    cin>>set[i];
   }
   int sum;
   cin>>sum;
   if(subset_sum(set,n,sum)==true)
   {
   	    cout<<"Found a subset with given sum";    
   }
   else
   {
   	cout<<"No subset with given sum";
   }
   return 0;
}

