/* one way or other we will end at same -- saurabh */
//thumb rule :- always use linked list eith stack and tree with queue(stackformax/min)
#include <bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
//using namespace __gnu_pbds;
using namespace std;
//template <typename T>
//using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define mp(a, b) make_pair(a, b)
#define pb push_back
#define ff first
#define F(i, n) for (ll i = 0; i < n; i++)
#define ss second
#define read(n) \
    ll n;       \
    cin >> n;
#define Fin(x, n)     \
    vector<int> x(n); \
    for (auto &i : x) \
        cin >> i;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define mod 1000000007
#define PI acos(-1.0)
const int N = 3e5, M = N;
const ll infl = 0x3f3f3f3f3f3f3f3fLL;
const int infi = 0x3f3f3f3f;
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

#define inf 1e18
struct edge
{
    ll u, v, cost;
};
void solve()
{
    vector<edge> v;
    read(n) read(m) read(q);
    vector<vector<ll>> ans(n, vector<ll>(n, inf));
    // ll ans[n][n];
    // F(i, n)
    // {
    //     F(j, n)
    //     {
    //         ans[i][j] = inf;
    //     }
    // }
    F(i, m)
    {
        read(a) read(b) read(c)
            a--;
        b--;
        ans[a][b] = c;
        ans[b][a] = c;
    }

    F(k, n)
    {
        F(i, n)
        {
            F(j, n)
            {
                if (ans[i][j] > ans[i][k] + ans[k][j])
                    ans[i][j] = ans[i][k] + ans[k][j], ans[j][i] = ans[i][k] + ans[k][j];
            }
        }
    }
    // deb(ans[0][3]);

    F(i, q)
    {
        int d, c;
        cin >> d >> c;
        d--;
        c--;
        if (ans[d][c] == inf)
            cout << -1 << endl;
        else
        {
            cout << ans[d][c] << endl;
        }
    }
}
// #define it int;
int main()
{
    fastio;
    //#ifndef Saurabh
    //	freopen("input.txt", "r", stdin);
    //	freopen("output.txt", "w", stdout);
    //#endif
    // read(tc) while (tc--)
    {
        solve();
    }
    return 0;
}