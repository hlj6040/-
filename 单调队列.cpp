#include<iostream>
using  namespace  std;
const  int  maxn  = 1000004;
int   q[maxn];
int   L[maxn];
int  main()
{
	int  n,t;
	int  head ,tail, l, r;
	head = tail = l = r = 0;
	cin >> n;
	while(n--)
	{
		cin >> t;
		if(t == 1)   	cout << r - l << endl;
		else  if(t == 2)
		{
			l++;
			while( head <= tail && L[head] <= l)  head++;
		}
		else  if(t == 3)
		{
			int  val;
			cin >>  val;
			r++;
			while(head <= tail && q[tail] <= val)  tail--;
			q[++tail] = val;
			L[tail] = r;
		}
		else
		{
			int  max;
			if(head <= tail)
				max = q[head];
			else
				max = 0;
			cout << max << endl; 
		}
	}
	return  0;
}
