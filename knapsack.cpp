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
pair<ll,ll>p[2001];
ll dp[2001][2001],n,k;
ll fun(ll i,ll c)
{
  if(c<0) return INT_MIN;
  if(i<0|| c==0) return 0;
  if(dp[i][c]!=-1) return dp[i][c];
   ll x=fun(i-1,c);
   ll y=fun(i-1,c-p[i].first)+p[i].second;
   dp[i][c]=max(x,y);
   return dp[i][c];
}
int main()
{
  int t=1;;
  //cin>>t;
  while(t--)
  {
    memn(dp);
    ll i,x,y,s=0;
    cin>>k>>n;
    for(i=0;i<n;i++) cin>>p[i].first>>p[i].second;
     cout<<fun(n-1,k)<<endl;
    
  }
}
