#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define ull unsigned long long
#define endl "\n"
#define MohamedMotaz ios::sync_with_stdio(0); cin.tie(0); ios_base::sync_with_stdio(0);
#define f(a, b, c) for(ll a = b; i < c; i++)
using namespace std;
const ll mod = 1e9 + 7;



ll fact[1000001]; ll inv[1000001];
ll primes[100007];
ll arr[1000007];
ll modPower(ll b, ll p) {
	if (p == 0)
		return 1;

	ll halfpow = modPower(b, p / 2);
	ll toReturn = (halfpow * halfpow) % mod;
	if (p % 2)
		toReturn = (toReturn * b) % mod;

	return toReturn;
}

ll fastPower(ll b, ll p) {
	if (p == 0)
		return 1;
	ll ans = fastPower(b, p / 2);
	ans = (ans * ans);
	if (p % 2 != 0)
		ans = (ans * b);
	return ans;
}
ll GcdRecursive(ll a, ll b) {
	if (b == 0) return a;
	return GcdRecursive(b, a % b);
}
ll modLCM(ll a, ll b) {
	ll val = GcdRecursive(a, b);
	ll tmp = ((a % mod) * (b % mod)) % mod;
	ll finalVal = ((tmp % mod) * (arr[val] % mod)) % mod;
	return finalVal;

}
ll LCM(ll a, ll b) {
	return (a * b) / GcdRecursive(a, b);
}
void move1step(ll& a, ll& b, ll q) { // a and b by reference
	ll c = a - q * b;
	a = b;
	b = c;
}
ll GcdIterative(ll a, ll b) {
	while (b) move1step(a, b, a / b);
	return a;
}

void pre(ll n) {

	fact[0] = 1;
	inv[0] = 1;

	for (ll i = 1; i <= n; i++) {
		fact[i] = (i * fact[i - 1]) % mod;
		inv[i] = modPower(fact[i], mod - 2);
		arr[i] = modPower(i, mod - 2);
	}
}

ll npr(ll n, ll r) {
	return ((fact[n] * inv[n - r]) % mod);
}

ll ncr(ll n, ll r) {
	return ((((fact[n] * inv[n - r]) % mod) * inv[r]) % mod);
}

void sieve(ll val) {
	memset(primes, 1, sizeof primes);
	primes[0] = primes[1] = false;
	for (int i = 2; i <= val; i++) {
		if (primes[i]) {
			for (int j = i * i; j <= val; j += i) {
				primes[j] = 0;
			}
		}
	}

}


const ll N = 1e5 + 7;

ll t;

int main() {

	MohamedMotaz;
	cin >> t;

	while (t--) {
		ll n; cin >> n;
		
		map<ll, ll> mp;
		vector<ll> vec;
		
		f(i, 0, n) {
			ll v; cin >> v;
			mp[v]++;
		}

		for(auto e: mp) {
			//cout << e.first << " " << e.second << endl;
			vec.push_back(e.second);
		}
		reverse(vec.begin(), vec.end());
		ll gold = vec[0]; //certain of it
		ll silver = 0, bronze = 0;
		
		bool done = false;

		ll index = 1, required = n / 2;
		while (index < vec.size() && silver <= gold) {
			silver += vec[index];
			index++;
		}
		if (silver > gold) {

			while (index < vec.size() && bronze <= gold) {
				bronze += vec[index];
				index++;
			}
			while (index < vec.size() && gold + silver + bronze + vec[index] <= required) {
				bronze += vec[index];
				index++;
			}
			if (gold < bronze && gold + silver + bronze <= required) {
				done = true;
				cout << gold << " " << silver << " " << bronze << endl;
			}

		}

		if (!done) {
			cout << "0 0 0" << endl;
		}
	}

}