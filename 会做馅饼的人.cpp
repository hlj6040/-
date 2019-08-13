//二分分饼问题
//HJH会做馅饼了，HJH做了N个巨大的馅饼（馅饼是圆形，半径为Ri）。
//于是HJH邀请了M个朋友。不过令HJH烦恼的事情，这些馅饼应该如何分? 
//每个人(包括HJH)都只能分得一块馅饼(或者是从某个饼切下来的一块)，
//并且每个人分得馅饼的面积必须相同，否则就会产生抱怨。
//HJH想知道在不产生抱怨的情况下，每个人（包括HJH）分得馅饼的最大面积S是多大？ 
//
//
//
//
 
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
