#include <bits/stdc++.h>
#define ll long long
using namespace std;
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
int binarysearch(vi A, int B)
{
    // int n = v.size();
    // sort(all(A));
    int n = A.size();
    int low = 0;
    int high = n;
    while (low < high)
    {
        int mid = (low + high) >> 1;
 
        if (B <= A[mid])
            high = mid;
        else
            low = mid + 1;
    }
    return low;
}
void solve()
{
    read(n) read(m);
    vi v(n), p(m);
 
    int c = 2 * 1e9;
    multiset<int, greater<int>> s;
    F(i, n)
    {
        read(z);
        s.insert(z);
    }
    F(i, m)
    cin >> p[i];
    F(i, m)
    {
        auto it = s.lower_bound(p[i]);
        if (it == s.end())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << *it << endl;
            s.erase(it);
        }
    }
}
int main()
 
{
    JAADU;
    {
        solve();
    }
    return 0;
}
