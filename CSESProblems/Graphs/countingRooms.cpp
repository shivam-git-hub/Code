#include<bits/stdc++.h>
#include <iostream>

using namespace std;

using ll = long long;
using ld = long double;
using pi = pair<int, int>;
using pll = pair<ll , ll>;
using vi = vector<int>;
using vll = vector<ll>;


#define fastio ios::sync_with_stdio(false);cin.tie(nullptr);
#define ff first
#define ss second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i, a, b) for(int i=a; i<b;i++)
#define fo(i,n) for(int i=0; i <n; i++)
#define inp(n) int n; cin>>n; vi a(n); for(int &x:a) cin >>x;

#ifdef LOCAL
	#define debug(x) cerr << #x << " = " << x << '\n';
#else
	#define debug(x)
#endif


const int MOD = 1e9+ 7;
const int INF = 1e9;
const int LINF = 1e18;

ll binpow(ll a, ll b, ll mod = MOD){
	
	ll res = 1;
	while(b > 0){
		if(b&1) res = res * a %mod;
		a = a*a %mod;
		b = b >> 1;
	}

	return res;
	
}	


ll modinv(ll a, ll mod = MOD){
	return binpow(a, mod-2, mod);
}

template<typename T1, typename T2>
ostream& operator<<(ostream &os,const pair<T1, T2> &p){

	return os << '(' << p.first << " , " << p.second << ')';
} 


template<typename T>
ostream& operator<<(ostream &os, const vector<T> &v){
	
	for(T &t: v){
		os << t << ' ';
	}
	
	return os;
}


void solve(){

	
	int n,m;
	cin >> n >> m;

	vector<vector<char>> graph(n, vector<char>(m));
    rep(i,n){
        rep(j, m){
            cin >> graph[i][j];
        }
    }

    queue<
	
	 



}


int main(){
	fastio;
	int t =1;
	//cin >> t;
	while(t--){
		solve();
	}

}
