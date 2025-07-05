
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pi = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ff first
#define ss second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i, a, b) for(int i = a; i < b; i++)
#define fo(i, n) for(int i = 0; i < n; i++)
#define rfo(n, j) for(int j = n - 1; j >= 0; j--)
#define prt(x) cout << x << endl

#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << x << '\n';
#else
    #define debug(x)
#endif

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

vi inp() {
    int n;
    cin >> n;
    vi a(n);
    fo(i, n) cin >> a[i];
    return a;
}

ll binpow(ll a, ll b, ll mod = MOD) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

ll modinv(ll a, ll mod = MOD) {
    return binpow(a, mod - 2, mod);
}

template<typename T1, typename T2>
ostream& operator<<(ostream& os, const pair<T1, T2>& p) {
    return os << '(' << p.first << " , " << p.second << ')';
}

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    for (const T& t : v) os << t << ' ';
    return os;
}

void solve() {
    //vi a = inp();
    //int n = a.size();
    
    
    int n;
    cin >> n;

    if(n%4 == 0) prt("BOB");
    else prt("Alice");
}

int main() {
    fastio;
    int t = 1;
     cin >> t;
    while (t--) {
        solve();
    }
}
