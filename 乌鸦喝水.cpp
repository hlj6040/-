#include<iostream>
#include<algorithm>
#include<math.h>
using  namespace  std;

struct  Date{
	int  length;
	int  v;
};
Date   da[1000];
bool   cmp(Date  x, Date y)
{
	if(x.length < y.length)
		return  true;
	else  if(x.length == y.length)
		return   x.v >= y.v;
	return  false;
}
int  main()
{
	int  n,v;
	while(cin >> n >> v)
	{
		for(int  i = 0; i < n; i++)
		{
			int x, y;
			cin >> x >> y;
			da[i].length = (x*x) + (y*y);
			cin >> da[i].v;
		}
		sort(da, da + n, cmp);
		int   ans = 0;
		for(int i = 0; i < n && v > 0; i++)
		{
			v -= da[i].v;
			ans++;
		}
		if(v <= 0)
			cout<< ans <<endl;
		else
			cout<< "NO" <<endl;
	}
	
	return  0;
}
