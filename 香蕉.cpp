#include<iostream> 
#include<cmath>
using  namespace  std;
int  main()
{
	int  a,b,c;
	cin >> a >> b >>c;
	while(b--)
		a -=ceil(a*1.0/c);
	
	cout << a ;
	return 0;
}
