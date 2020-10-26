#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define mp(a, b) make_pair(a, b)
#define all(X) X.begin(), X.end()
#define pb push_back
#define ff first
#define F(i, n) for (ll i = 0; i < n; i++)
#define F1(i, s, e) for (ll i = s; i <= e; i++)
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
    vector<pii> time;
    F(i, n)
    {
        read(a) read(b);
        time.push_back({b, a});
    }

    sort(all(time));
    int ans = 0, curr_end = 0;
    for (auto i : time)
    {
        if (i.second >= curr_end)
        {
            curr_end = i.first;
            ans++;
        }
    }

    cout << ans << endl;
}
int main()
{
    JAADU;
    // read(tc) while (tc--)
    {
        solve();
    }
    return 0;
}
