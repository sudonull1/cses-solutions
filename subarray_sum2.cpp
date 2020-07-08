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
#define V(X) vector<X>;
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
void solve()
{
    read(n)
        read(t);
    Fin(v, n);
    vector<ll> sum(n);
    sum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        sum[i] = v[i] + sum[i - 1];
    }

    ll j = 0, st = 0, res = 0, curr = 0;
    while (j < n)
    {
        if (sum[j] < t)
            j++;
        if (sum[j] > t)
            curr = sum[j] - v[st++];
        if (curr == t)
            res++;
    }
    cout << res << endl;
}
int main()
{
    fastio;
    //#ifndef Saurabh
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