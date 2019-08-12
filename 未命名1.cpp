#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
const  int max1=2000010;
int  block[500005],rest,ans[max1],cnt[max1],a[500005];
int  n,m;
	int  pp;
 	int  st=1,end=1;
 	
struct   Mo
{
	int   l,r,id;
	friend  bool operator<(const  Mo &x,const  Mo &y)
	{
		if(block[x.l]==block[y.l])
			return  x.r<y.r;
		return  x.l<y.l;
	}
 };
void   add(int  x)
{
	cnt[a[x]]++;
	if(cnt[a[x]]==1)
		rest++;
}

void   del(int x)
{
	cnt[a[x]]--;
	if(cnt[a[x]]==0)
		rest--;
}

Mo mo[max1];
 int main()
 {
 	
 	cin>>n;
 	pp=sqrt(n)/2;
 	for(int i=1;i<=n;i++)
 		{
 			cin>>a[i];
 			block[i]=(i-1)/pp+1;
 		}
 	rest=1;
 	cnt[a[1]]=1;
 	cin>>m;
 	for(int i=1;i<=m;i++)
 	{
 		int l,r;
 		cin>>l>>r;
 		mo[i].l=l;mo[i].r=r;
 		mo[i].id=i;
 		
	 }
	
	sort(mo+1,mo+1+m); 
	
	for(int i=1;i<=m;i++)
	{
		while(end<mo[i].r)
		{
			end++;
			add(end);
		}
		while(st>mo[i].l)
		{
			st--;
			add(st);
		}
		while(end>mo[i].r)
		{
			del(end);
			end--;
		}
		while(st<mo[i].l)
		{
			del(st);
			st++;
		}
		ans[mo[i].id]=rest;
	}
	
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<endl;
	}
	return 0;
 }
 
