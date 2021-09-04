
#include<bits/stdc++.h>
using namespace std;
typedef     long long    ll;
typedef     vector<int> vi;
typedef     vector<long long> vl;
typedef     pair<int, int>pi;
typedef     pair<long long, long long>pl;
#define F   first
#define S   second
#define pb  push_back
#define     all(x)      x.begin() , x.end()
#define mp  make_pair
#define     REP(i,a,b) for(i=a;i<=b;i++)
#define     mem(a)      memset(a , 0 ,sizeof a)
#define     memn(a)     memset(a , -1 ,sizeof a)
int a[10004],d[10004];
int n,i,j;
void lis(){
    memset(d,1,sizeof(d));
 for (i = 1; i <= n - 1; i++)
    {
      for (j = i + 1; j <= n; j++)
      {
        if (a[j] > a[i])
        {
          d[j] = max(d[j],d[i] + 1);

        }
      }
    }
    int  mx=0;
     for (i = 1; i <= n; i++)
    {
      mx = max(d[i], mx);
    }
    mx++;
    vi v;
    for(i=n;i>=1;i--)
    {
      if(d[i]==mx-1) 
        {
          v.pb(a[i]); mx--;
        }
    }
    reverse(all(v));
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++) cout<<v[i]<<" ";
      cout<<endl;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y;
    cin >> n;
    for (i = 1; i <= n; i++) cin >> a[i];
      lis();
  }
}
