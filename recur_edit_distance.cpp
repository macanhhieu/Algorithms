#include<bits/stdc++.h>

using namespace std;
int min(int a,int b,int c)
{
	return min(min(a,b),c);
}
int recur_edit_distance(const string &str1,const string &str2,int m,int n)
{
	if(m==0) return n;
	if(n==0) return m;
	if(str1[m-1]==str2[n-1])
	{
		return recur_edit_distance(str1,str2,m-1,n-1);
	}
	else
	return (1+min(recur_edit_distance(str1,str2,m,n-1),
	           recur_edit_distance(str1,str2,m-1,n),
	           recur_edit_distance(str1,str2,m-1,n-1)));
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   string str1;
   string str2;
   cin>>str1>>str2;
   cout<<recur_edit_distance(str1,str2,str1.length(),str2.length());
   return 0;
}

