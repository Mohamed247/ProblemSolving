#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <cstdio>
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

#define ll long long
#define ld long double
#define ull unsigned long long
#define endl "\n"
#define MohamedMotaz ios::sync_with_stdio(0); cin.tie(0); ios_base::sync_with_stdio(0);
#define f(a, b, c) for(int a = b; a < c; a++)
#define fr(a, b, c) for(int a = b; a >= c; a--)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define vll vector<ll>
#define vld vector<ld>
#define vi vector<int>
#define vs vector<string>
#define pll pair<ll,ll>
#define pld pair<ld, ld>
#define vpll vector<pll>
#define vpld vector<pld>
#define vc vector<char>
#define vs vector<string>
#define vp vector<point>
#define vb vector<bool>
#define mll map<ll,ll>
#define mllv map<ll, vll>
#define mcll map<char, ll>
#define mci map<char, int>
#define msll map<string, ll>
#define mss map<string, string>
#define mcs map<char, string>
#define sll set<ll>
#define pi acos(-1)
#define point complex<ld>
using namespace std;

ll GcdRecursive(ll a, ll b) {
	if (b == 0) return a;
	return GcdRecursive(b, a % b);
}

const ll mod = 1e9 + 7;
int dirX[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dirY[] = { -1, 0, 1, 0, 1, -1, -1, 1 };


const ll MOD = 998244353;
//const ll mod = 1e9 + 7;
const ll N = 2e5 + 7;
const ll LLinf = 1e18 + 5;
const int INTinf = 1e8 + 7;


ll t, n, m, a, b, k, c = 0, d, x , y;
ll x11, x22, y11, y22;
string s;

int main() {
    MohamedMotaz
    cin >> n;
    int sum = 0;
    if (n <= 2) return cout << "No", 0;

    int k = (n % 2 == 0) ? n / 2 : n / 2 - 1;
    cout << "Yes" << endl;
    cout << "1 " << k << endl;
    cout << n - 1 << " ";
    f(i, 1, n + 1) {
        if (i == k) continue;
        cout << i << " ";
    }

}