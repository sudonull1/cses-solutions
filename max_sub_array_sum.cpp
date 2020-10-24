#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define mp(a, b) make_pair(a, b)
#define all(X) X.begin(), X.end()
#define pb push_back
#define ff first
#define F(i, n) for (ll i = 0; i < n; i++)
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
    vi v;
    F(i, n)
    {
        read(a);
        v.pb(a);
    }

    ll overall_max = -1 * infl, max_so_far = 0;
    ll s = v.size();
    F(i, s)
    {
        max_so_far += v[i];
        overall_max = max(overall_max, max_so_far);
        if (max_so_far < 0)
            max_so_far = 0;
    }
    cout << overall_max << endl;
}
int main()
{
    JAADU;
    {
        solve();
    }
    return 0;
}
