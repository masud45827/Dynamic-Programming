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
// int lcs(string s1, string s2, int x, int y)
// {
//   if (x == 0 || y == 0) return 0;
//   if (s1[x - 1] == s2[y - 1])
//   {
//     return 1 + fun(s1, s2, x - 1, y - 1);
//   } else
//   {
//     return max(fun(s1, s2, x - 1, y), fun(s1, s2, x, y - 1));
//   }
// }
// string lcs_string_ptint(string s1,string s2,int n,int m){
//     int dp[n+2][m+2],i,j;
//     for(i=0;i<=n;i++){
//         for(j=0;j<=m;j++){
//              if(i==0||j==0) dp[i][j]=0;
//              else if(s1[i-1]==s2[j-1]) dp[i][j]=1+dp[i-1][j-1];
//              else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//         }
//     }
//      int mx=dp[n][m];
//       i=n; j=m;
//       string s;
//        while(i>0&&j>0){
//          if(s1[i-1]==s2[j-1]) {
//             s.push_back(s1[i-1]);
//             i--;j--;
//         }else{
//              if(dp[i-1][j]>dp[i][j-1]) i--;
//              else j--;
//         }
//        }
//        reverse(s.begin(),s.end());
//        return s;
//  }
int lcs(string  X, string Y, int m, int n)
{
    int L[m + 1][n + 1];
    int i, j;
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
  
            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
  
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }
    return L[m][n];
}
int main()
{
  int t = 1;
// cin >> t;
  while (t--)
  {
    string s1, s2;
    cin >> s1 >> s2;
    int x = lcs(s1, s2, s1.size(), s2.size());
    cout << x << endl;
  }
}
