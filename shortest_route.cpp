#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
//using namespace __gnu_pbds;
using namespace std;
//template <typename T>
//using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define all(X) (X).begin(), (X).end()
#define reset(X) memset(X, 0, sizeof(X))
#define mp(a, b) make_pair(a, b)
#define pb push_back
#define ff first
#define F(i,n) for(ll i=0;i<n;i++)
#define ss second
#define read(n) ll n; cin>>n;
#define Fin(x, n) vector<int> x(n); for(auto &i:x) cin>>i;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii;
#define mod 1000000007
#define PI acos(-1.0)
#define eps 1e-7
const int N = 3e5, M = N;
const ll infl=0x3f3f3f3f3f3f3f3fLL;
const int infi=0x3f3f3f3f;
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
vi G[N];
vector<bool> vis(N,0);
vector<pair<int, int> > gr[N];
set<pair<int, int> > s;
priority_queue<pii, vector<pii> , greater<pii> > q;

void dik(vector<pii> *gr, int source, int n)
{
    vector<int> dist(n+1, infi);
    dist[source] = 0;
    //dijkstra using priority queue
    q.push(make_pair(0,source));
    while(!q.empty())
    {
        int u = (q.top().second);
        q.pop();
        for(auto child : gr[u])
        {
            int vert = child.first;
            int cost = child.second;
            if(dist[vert]>cost+dist[u])
            {
                dist[vert] = cost+dist[u];
                q.push(make_pair(dist[vert], vert));
            }
        }
    }
    for(int i=1;i<=n;i++)
    cout<<dist[i]<<" ";
}
void solve()
{
    int a,b,n,m,c;
    cin>>n>>m;
    while(m--)
    {
        cin>>a>>b>>c;
        gr[a].push_back(make_pair(b,c));
    }
    dik(gr, 1, n);
}

int main()
{
// #ifndef Saurabh
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     read(tc)
//     while(tc--)
    {
        solve();
    }
    return 0;
}
