#include<bits/stdc++.h>

using namespace std;
int unbounded_knapsack(int weight[],int value[],int n,int W)
{
	int K[W+1];
	K[0]=0;
	for(int x=1;x<=W;++x)
	{
		K[x]=0;
		for(int i=0;i<n;++i)
		{
			int w = weight[i];
			int v = value[i];
			if(w<= x)
			{
				K[x]= max(K[x],K[x-w]+v);
			}
		}
	}
	return K[W];
}
int unboundedKnapsack(int W, int n, int val[], int wt[])
{
    // dp[i] is going to store maximum value
    // with knapsack capacity i.
    int dp[W+1];
    //memset(dp, 0, sizeof dp);
    dp[0]=0;
 
   // int ans = 0;
 
    // Fill dp[] using above recursive formula
    for (int i=1; i<=W; i++) //or i= 1;
      {
      	dp[i]=0;
      	for (int j=0; j<n; j++)
         {
         	int w = wt[j];
         	int v = val[j];
         	if (w <= i)
            dp[i] = max(dp[i], dp[i-wt[j]]+v);
		 }
	  }
 
    return dp[W];
}
int main()
{
	int W = 100;
    int val[] = {10, 30, 20};
    int wt[] = {5, 10, 15};
    int n = sizeof(val)/sizeof(val[0]);
 
    cout << unbounded_knapsack(wt, val, n, W);
     //cout << unboundedKnapsack(W, n, val, wt);
	
	return 0;
}
