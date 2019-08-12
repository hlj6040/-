#include<iostream>
using  namespace std;
int   a[100003] = {1,};
int  main()
{
	int  n;
	cin >> n;
	for(int  i = 0; i < n; i++)
	{
		for(int  j = 2; j <= 12; j++)
		{
			if((i - j) < 0)
				break;
			a[i] += a[i-j];
			a[i] %= 100000007;
		}
	}
	int  ans = 0;
	for(int  i = 1; i <= 12; i++)
	{
		ans += a[n - i];
		ans %= 100000007;
	}
	cout<<ans;
	return 0;
}
