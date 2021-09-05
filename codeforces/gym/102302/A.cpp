#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
clock_t T;
#define ctime cerr <<endl<< "Time : " << double(clock() - T) / CLOCKS_PER_SEC << endl
#define debug(x) cout << (#x) << " " << (x) <<" "<< endl
#define debug2(x, y) cout << (#x) << " " << (x) <<" "<< (#y) << " " << (y) <<" "<< endl
#define debug3(x, y, z) cout << (#x) << " " << (x) <<" "<< (#y) << " " << (y) <<" "<< (#z) << " " << (z) << endl
#define marwan ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);ios_base::sync_with_stdio(0);
#define read freopen("input.txt", "r", stdin);
#define write  freopen("output.txt", "w", stdout);
#define f(a, b, c) for(ll a = b; a < c; a++)
#define fr(a, b, c) for(int a = b; a >= c; a--)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define vll vector<ll>
#define vld vector<ld>
#define pll pair<ll,ll>
#define vpll vector<pll>
#define cinvec(v, n) f(i, 0, n){ll a;cin>>a;v.pb(a);};
#define printvec(v, n) for (auto e: v) cout << e << " "; cout << endl;
#define pb push_back
#define pf push_front
#define RESET(a, b) memset(a, b, sizeof(a))
int INF = 1000000005;
long long INFF = 1000000000000000005LL;
double pi = acos(-1);
int dirx[8] = {-1, 0, 0, 1, -1, -1, 1, 1};
int diry[8] = {0, 1, -1, 0, -1, 1, -1, 1};
using namespace std;

struct node {
    ll x, y;
};


bool cmp(const node a, const node b) {
    if (a.x != b.x)
        return a.x > b.x;
    return a.y < b.y;
}

int main() {

#ifdef offline_debug
    read
#endif
    marwan
    ll n;
    cin >> n;
    vll v;
    cinvec(v, n)
    for(int i=0;i<n;i++)
    {
        ll ans=0;
        for(int j=i+1;j<n;j++)
        {
            if(v[i]>=v[j])ans++;
            else break;
        }

        ll mx=min(n-1,v[i]+i);
        ans=min(ans,mx);
        cout<<ans<<" ";
    }

    return 0;
}

// 3 2 2 1 denfier
// 3 5 3 1 denfier
// 3 2 3 1 tomas
// 3 2 3 2 tomas
// 3 2 3 1 tomas