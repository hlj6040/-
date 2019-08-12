#include<iostream>
using namespace std;
const   int   maxx = 1000;
int  n,dp[maxx],a[maxx],dp1[maxx];
int  main()
{
	int   cnt = 0;
	int   ans = 0, ansx = 0;
	
	while(cin >> n && n!= 0)
	{
		a[cnt++] = n;
		dp[cnt] = dp1[cnt] = 1;
		for(int  i = 0; i < cnt - 1; i++)
		{
			if(n > a[i])
				dp[cnt] = max(dp[cnt],dp[i + 1] + 1);
			if(n <= a[i])
				dp1[cnt] = max(dp1[cnt],dp1[i + 1] + 1);
		}
		ans = max(ans,dp1[cnt]);   ansx = max(ansx,dp[cnt]);
	}
	cout<<  ans  <<endl
		<<  ansx  <<endl; 
	return 0;
 } 
