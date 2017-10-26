#include<bits/stdc++.h>

using namespace std;
int min(int a,int b,int c)
{
	return min(min(a,b),c);
}

int edit_distance(const string &str1,const string &str2,int n,int m)
{
	//int dp[n+1][m+1];
	vector<vector<int> > dp(n+1,vector<int>(m+1,0));
	for(int i =0;i<=n;++i)
	{
		for(int j =0;j<=m;++j)
		{
			if(i==0)
			{
				dp[i][j]=j;
			}
			else if(j==0)
			{
				dp[i][j]=i;
			}
			else if(str1[i-1]==str2[j-1])
			{
				dp[i][j] = dp[i-1][j-1];
			}
			else
			{
				dp[i][j]=1+min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1]);
			}
		}
	}
	return dp[n][m];
	
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   string str1;
   string str2;
   cin>>str1>>str2;
   cout << edit_distance(str1,str2,str1.length(),str2.length());
   return 0;
}

