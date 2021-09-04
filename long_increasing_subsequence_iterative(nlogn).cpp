#include<bits/stdc++.h>
using namespace std;
typedef     long long    ll;
typedef     unsigned long long    ull;
typedef     vector<int> vi;
typedef     vector<long long> vl;
typedef     pair<int, int>pi;
typedef     pair<long long, long long>pl;
#define F   first
#define S   second
#define pb  push_back
#define     all(x)      x.begin() , x.end()
#define mp  make_pair
#define mod 1000000007
#define       FOR(i,a,b) for(i=a;i<=b;i++)
#define     mem(a)      memset(a , 0 ,sizeof a)
#define     memn(a)     memset(a , -1 ,sizeof a)
 ll fun(vector<int>v)
 {
    int n=v.size(),j,mx=0;
    vector<int>d(n+1,1e9);
    d[0]=-1e9;
    for(int i=0;i<n;i++)
    {
       j=upper_bound(all(d),v[i])-d.begin();
       if(d[j-1]<v[i]&&v[i]<d[j])
       {
        d[j]=v[i];
       }
    }
    for(int i=0;i<=n;i++)
    {
        if(d[i]<1e9)
            {
               mx=i;
            }
    }
    return mx;
 }
int main()
{
    int t = 1, fac = 1;
    // cin >> t;
    while (t--)
    {
        ll n, i, x, y;
        cin >> n;
        vi v(n);
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vi v1;
        x=fun(v);
      cout<<x<<endl;
    }
}
