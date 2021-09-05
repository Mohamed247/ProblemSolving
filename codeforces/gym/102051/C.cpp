#include <iostream>
#include <stdio.h>
#include <functional>
#include <string>
#include <cstring>
#include <cstdio>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <iomanip>
#include <complex>
#include <unordered_set>
#include <assert.h>
#include <sstream>


#define ll long long
#define ld long double

#define debug1(x) cout << (#x) << " " << (x) <<" "<< endl
#define debug2(x,y) cout << (#x) << " " << (x) <<" "<< (#y) << " " << (y) <<" "<< endl
#define debug3(x,y,z) cout << (#x) << " " << (x) <<" "<< (#y) << " " << (y) <<" "<< (#z) << " " << (z) << endl
#define debug4(x,y,z, a) cout << (#x) << " " << (x) <<" "<< (#y) << " " << (y) <<" "<< (#z) << " " << (z) << " "<< (#a) << " " << (a) << endl

#define trace1(x) cerr<<#x<<": "<<x<<" "<<endl
#define trace2(x, y) cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z) cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl

#define ull unsigned long long
#define endl "\n"
#define MohamedMotaz ios::sync_with_stdio(0); cin.tie(0); ios_base::sync_with_stdio(0);
#define readwrite freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#define read freopen("input.txt", "r", stdin);
#define write freopen("output.txt", "w", stdout);
#define clr(x, y) memset(x, y, sizeof(x));
#define f(a, b, c) for(ll a = b; a < c; a++)
#define fr(a, b, c) for(int a = b; a >= c; a--)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define vll vector<ll>
#define vld vector<ld>
#define vii vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define pll pair<ll,ll>
#define pld pair<ld, ld>
#define vpii vector<pii>
#define vpll vector<pll>
#define vpld vector<pld>
#define vc vector<char>
#define vs vector<string>
#define vp vector<point>
#define vb vector<bool>
#define mll map<ll,ll>
#define mii map<int, int>
#define mllv map<ll, vll>
#define mcll map<char, ll>
#define mcii map<char, int>
#define msll map<string, ll>
#define mss map<string, string>
#define mcs map<char, string>
#define sll set<ll>
#define sz(x) (ll)x.size()
#define cinvec(v) f(i, 0, v.size()) cin >> v[i]
#define coutvec(v) for (auto e: v) cout << e << " "; cout << endl;
#define printvec(v) for (auto e: v) cout << e << " "; cout << endl;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define pi acos(-1)
#define point complex<ld>

using namespace std;
const int mod = 1e9 + 7;

const int N = 1e5 + 7;
vector<ll> adjlist[N];
map<string, int> idx;
int ctr = 1;
int vis[N];

int dfs(int node){
    if (vis[node])
        return 0;
    vis[node] = 1;
    int ctr = 1;
    for (auto e: adjlist[node]){
        ctr += dfs(e);
    }

    return ctr;
}

    int par[N];
    void init() {
        for(int i = 1; i <= N + 1; i ++)
            par[i] = i;
    }
    int findpar(int u)
    {
        return u == par[u] ? u : findpar(par[u]);
    }
    bool sameset(int u, int v)
    {
        return findpar(u) == findpar(v);
    }
    void join(int u, int v)
    {
        if(sameset(u, v))
            return;
        par[findpar(u)] = par[findpar(v)];
    }
int main(){
    MohamedMotaz;
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> sol;
    init();
    for (int i = 0; i < m; i++){
        string s, t;
        cin >> s >> t;
        if (!idx[s])
            idx[s] = ctr++;
        if (!idx[t])
            idx[t] = ctr++;

        join(idx[t], idx[s]);
        join(idx[s], idx[t]);
    }
//    for (int i = 1; i <= n; i++){
//        if (!vis[i]){
//            int ans = dfs(i);
////            if (adjlist[i].size() == 0)
////                continue;
//            sol.push_back(ans);
//        }
//    }
    map<int,int> mp;
    for (int i = 1; i<= n; i++){
        mp[par[i]]++;
    }
    for (auto e: mp)
        sol.push_back(e.second);
    sort(rall(sol));
    ll ans = 0;
    for (int i = 0; i < k; i++){
        ans += sol[i];
    }
    cout << ans;

}

//7 5 1
//1 2
//1 3
//4 5
//4 6
//4 7














//1 2 3
//1
//1 2