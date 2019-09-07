#include<iostream>
using  namespace std;
int  v[1007],map[1002][1002];
long long d[1003];
int  main()
{
	int  n,m;
	cin >> n >> m;
	int  star,end;
	cin >> star >> end;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			map[i][j] = INT_MAX;
	for(int i = 0; i < m; i++)
	{
		int  ui,vi,w;  
		cin  >> ui >> vi >> w;
		map[ui][vi] = min(map[ui][vi],w);	
	}
	
	
	for(int i = 1; i <= n; i++)	d[i] = (i == star ? 0 : INT_MAX);
	
	for(int i = 0; i < n; i++)
	{
		int  x ,m = INT_MAX;
		for(int j = 1; j <= n; j++)  
		{
			if(!v[j] && d[j] <= m) m = d[x=j];
		}
		v[x] = 1;
		for(int j = 1; j <= n; j++)
			d[j] = min(d[j],d[x]+map[x][j]);

	}
	if(d[end] < INT_MAX)
		cout << d[end];
	else 
		cout << "todokanaikoi";
	return 0;
 } 
