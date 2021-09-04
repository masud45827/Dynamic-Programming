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
vector<int> fun(vector<int>v)
{
    int n = v.size();
    vi p(n, -1);
    vi  d(n, 1);
    int mx = 0, in = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (v[i] > v[j] && d[i] < d[j] + 1)
            {
                d[i] = d[j] + 1;
                p[i] = j;
            }

        }
        if (mx < d[i])
        {
            mx = d[i];
            in = i;
        }
    }
    vi v2;
     int pos=in;
     while(pos!=-1)
     {
       v2.pb(v[pos]);
       pos=p[pos];
     }
      reverse(all(v2));
      return v2;

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
        v1 = fun(v);
        for (i = 0; i < v1.size(); i++) cout << v1[i]<<" ";
            cout<<endl;

    }
}
