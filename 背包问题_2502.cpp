#include<iostream>
using  namespace std;

int  vi,w;
int  dp[300];

int   main()
{
	int  t;
	cin >> t;
	while(t--)
	{
		int  n, v;   int  cnt;
		cin >> n >> v;
		for(int  i = 0; i < n; i++)
		{
			cin >> vi >> w >> cnt;
			for(int  j = 0; j < cnt; j++)
			{
				for(int  p = v; p > 0; p--)
					{
						if(p >= vi)
							dp[p] = max(dp[p], dp[p - vi] + w);
					}
			}
		}
		cout << dp[v - 1] <<endl;
		for(int  i = 0; i <= v; i++)
			dp[i] = 0;
	}
	return 0;
}
