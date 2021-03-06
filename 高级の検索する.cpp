//输入两个数n和q，分别表示n个正整数和q次查找
//每次查找一个数字x，输出有多少数比x小，有多少个数比x大.


#include<iostream>
#include<algorithm>
using  namespace std;
int  a[100005],n;
int  max1 = 0;
int  findmax(int x)//找小
{
    int l = 1,r = n;
    if(x > a[r])
        return r;
    while(l < r)
    {
        int  min = l + (r-l)/2;
        if(a[min] >= x)
            r = min ;
        else
        {
           l = min + 1;
        }
       
    }
    return  r - 1;
}
int  findmin(int x)//找大
{
    int  l = 1,r = n;
    if(a[1] > x )
        return  0;
    while(l < r)
    {
        int  mid = (l+r+1)/2;
        if(a[mid] <= x)
            l = mid ;
        else
        {
            r = mid - 1 ;
        }
    }
    return  r;
}
int  main()
{
    int  q;
    cin >> n >> q;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a+1,a+n+1);
    while(q--)
    {
        int m;
        cin >> m;
        cout<<findmax(m)<<" "<<n-findmin(m)<<endl;
       
    }

    system("pause");
    return 0;
}
