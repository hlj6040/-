#include<iostream>
#include<cmath>
using  namespace  std;
const  double  pi = acos(-1.0);
const  double  e =1e-6;
double  a[10005];
int  main()
{
	
	int  n, m, maxSize = 0;
	
	cin >> n >> m;
	for(int  i = 0; i < n; i++)
	{
		cin >> a[i];
		a[i] = a[i] * a[i] * pi;
		maxSize = maxSize < a[i] ? a[i] : maxSize; 
	}
	double  mid;
	double  l = 0.0, r = maxSize;
	while(r - l > e)
	{
		mid = (l + r) / 2;
		int  cnt = 0;
		for(int  i = 0; i < n; i++)
			cnt +=int( a[i] / mid);
			
		if( cnt < m+1)
			r = mid;
		else
		  	l = mid;
	}
	cout << (int)mid <<endl;
	return  0;	
}
