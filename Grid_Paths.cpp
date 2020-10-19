#include <bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
//using namespace __gnu_pbds;
using namespace std;
//template <typename T>
//using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define mp(a, b) make_pair(a, b)
#define all(X) X.begin(), X.end()
#define pb push_back
#define ff first
#define F(i, n) for (ll i = 0; i < n; i++)
// #define F(i,s,e) for(ll i=s;i<=e;i++)
#define ss second
#define read(n) \
    ll n;       \
    cin >> n;
#define Fin(x, n) vector<int> x(n), for (auto &i : x) cin >> i;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007
#define PI acos(-1.0)
const int N = 3e5, M = N;
const ll infl = 0x3f3f3f3f3f3f3f3fLL;
const int infi = 0x3f3f3f3f;
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
#define JAADU ios_base::sync_with_stdio(false), cin.tie(nullptr);
void solve()
{
    read(n);
    string s[n];
    F(i, n)
    {
        cin >> s[i];
    }
    int a[n][n];
    F(i, n)
    {
        F(j, n)
        {
            if (s[i][j] == '*')
                a[i][j] = 1;

            else
                a[i][j] = 0;
        }
    }

    int dp[n][n];
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (i == n - 1 && j == n - 1)
                dp[i][j] = 1;
            else
            {
                int x = (i == n - 1 ? 0 : dp[i + 1][j]);
                int c = (j == n - 1 ? 0 : dp[i][j + 1]);

                dp[i][j] = (x + c) % mod;

                if (a[i][j])
                    dp[i][j] = 0;
            }
        }
    }
    if (!a[n - 1][n - 1] && !a[0][0])
        cout << dp[0][0] << endl;
    else
    {
        cout << 0 << endl;
    }
}
int main()
{
    JAADU;
    //#ifndef ONLINE_JUDGE
    //	freopen("input.txt", "r", stdin);
    //	freopen("output.txt", "w", stdout);
    //#endif
    // read(tc)
    // while(tc--)
    {
        solve();
    }
    return 0;
}
