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
    vi v(n);
    F(i, n)
    cin >> v[i];
    vi ans;
    // ans.push_back(0);
    vector<pair<int, int>> s;
    s.push_back({0, 0});
    F(i, n)
    {
        while (s.back().first >= v[i])
            s.pop_back();
        ans.push_back(s.back().second);
        s.push_back({v[i], i + 1});
    }

    for (auto i : ans)
        cout << i << " ";
    cout << endl;
}
int main()
{
    JAADU;
    {
        solve();
    }
    return 0;
}
