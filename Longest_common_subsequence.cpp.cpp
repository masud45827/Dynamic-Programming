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
int fun(string s1, string s2, int x, int y)
{
  if (x == 0 || y == 0) return 0;
  if (s1[x - 1] == s2[y - 1])
  {
    return 1 + fun(s1, s2, x - 1, y - 1);
  } else
  {
    return max(fun(s1, s2, x - 1, y), fun(s1, s2, x, y - 1));
  }
}
int main()
{
  int t = 1;
// cin >> t;
  while (t--)
  {
    string s1, s2;
    cin >> s1 >> s2;
    int x = fun(s1, s2, s1.size(), s2.size());
    cout << x << endl;
  }
}
