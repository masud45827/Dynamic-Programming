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
#define       FOR(i,a,b) for(i=a;i<=b;i++)
#define     mem(a)      memset(a , 0 ,sizeof a)
#define     memn(a)     memset(a , -1 ,sizeof a)
const int MAXN = 2003;
const int MOD = 1e9;
int nCr[MAXN][MAXN];
int main()
{
    
        int i, n, r, k, t;
        for (n = 0; n <= 2000; n++)
            for (r = 0; r <= n; r++)
                if (r == 0 || n == r) nCr[n][r] = 1;
                else nCr[n][r] = (nCr[n - 1][r - 1] + nCr[n - 1][r]) % MOD;

        scanf("%d", &t);
        while (t--)
        {
            scanf("%d %d", &n, &k);
            printf("%d\n", nCr[k + n - 1][k]);
        }

    return 0;
}
