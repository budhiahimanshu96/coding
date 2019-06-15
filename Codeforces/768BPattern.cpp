#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define boost() ios_base :: sync_with_stdio(0); cin.tie(); cout.tie(); cout << fixed; cout << setprecision(15); srand(time(NULL))
#define endl '\n'
typedef long long ll;
const int _N = 3e5 + 5;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;

ll n, l, r, cnt = 0;
map <ll, ll> calc, dp;

ll build(ll n) {
	if (n < 2) return dp[n] = n;
	if (calc[n]) return dp[n];
	calc[n] = 1;
	dp[n] = 2LL * build(n / 2) + (n & 1);
	return dp[n];
}

ll solve(ll n, ll L, ll R) {
	if (l > R || r < L) return 0;
	if (l <= L && r >= R) return dp[n];
	ll plus = 0;
	if ((L + R) / 2 <= r && (L + R) / 2LL >= l) plus = (n & 1);
	return solve(n / 2LL, L, (L + R) / 2LL - 1) + solve(n / 2LL, (L + R) / 2LL + 1, R) + plus;
}

int main() {
	boost();
	#ifndef ONLINE_JUDGE
		freopen("in", "r", stdin);
	#endif
	cin >> n >> l >> r;
	if (n < 2) {
		if (l <= 1 && 1 <= r) cout << n << endl;
		else cout << 0 << endl;
		return 0;
	}
	ll m = n;
	while (m > 1) { cnt += 1; m /= 2ll; }
	ll sz = (1LL << (cnt + 1)) - 1;
	build(n);
	cout << solve(n, 1, sz) << endl;
	return 0;
}


/////////////////////////////////////////////

#include<bits/stdc++.h>

using namespace std;

long long n, l, r, ans;
long long dp[1010], num[1010];
map<long long, int> h;

void dfs2(long long x, int d) {
	h[x] = d;
	if (x <= 1) {
		dp[d] = x;
		num[d] = 1;
		return ;
	}
	dfs2(x / 2, d + 1);
	dp[d] = 2ll * dp[d + 1] + (x % 2);
	num[d] = 2ll * num[d + 1] + 1;
	return ;
}

long long dfs(long long x, long long l, long long r) {
	int d = h[x];
	long long ans = 0;
	//cout << "x: " << x << ", l: " << l << ", r: " << r << ", d: " << d << ", dp[d]: " << dp[d] << ", num[n]: " << num[d] << endl;
	//system("pause");
	if (l >= num[d]) {
		return 0;
	}
	if (r - l + 1 >= num[d]) {
		ans += dp[d];
		return ans;
	}
	
	if (l <= num[d + 1] - 1) {
		long long tr = min(num[d+1] - 1, r);
		ans += dfs(x / 2, l, tr);
	}
	if (r >= num[d + 1] + 1) {
		long long tl = max(num[d + 1] + 1, l);
		ans += dfs(x / 2, tl - num[d+1]-1, r-num[d+1]-1);
	}
	if (l <= num[d + 1] && r >= num[d + 1]) {
		ans += x % 2;
	}
	//cout << "x: " << x << ", ans: " << ans << endl;
	
	return ans;
}

int main() {
	while (cin >> n >> l >> r) {
		memset(num, 0, sizeof(num));
		memset(dp, 0, sizeof(dp));
		ans = 0;
		dfs2(n, 0);
		cout << dfs(n, l - 1, r - 1) << endl;
	}
}

//////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
#include <cassert>
#include <tuple>
#include <functional>
#include <unordered_set>
#include <unordered_map>
#include <sstream>
#include <stdio.h>
#include <valarray>

typedef long long tint;
typedef unsigned long long utint;
typedef long double ldouble; 


#define forn(i,n) for(tint i=0;i<(tint)(n); i++)
#define forsn(i,s,n) for(tint i=(s);i<(tint)(n); i++)
#define esta(x,v) (find((v).begin(),(v).end(),(x)) !=  (v).end())
#define index(x,v) (find((v).begin(),(v).end(),(x)) - (v).begin())
#define debug(x) cout << #x << " = "  << x << endl



using namespace std;



void imprimirVector (vector<tint> v)
{
	if (!v.empty())
	{ 
		tint p = tint(v.size());
		cout << "[";
		forn(i,p-1)
			cout << v[i] << ",";
		cout << v[p-1] << "]" << endl;
	}
	else
		cout << "[]" << endl;
}

tint toNumber (string s)
{
	tint Number;
	if ( ! (istringstream(s) >> Number) )
		Number = 0; // el string vacio lo manda al cero
	return Number;
}

string toString (tint number)
{    
    ostringstream ostr;
    ostr << number;
    return  ostr.str();
}

// CRIBA

//const tint maxN = 1000500;
//int p[maxN + 1] = {1, 1};
//tint phi[maxN]; // DAR CHANGUI DE 500 O MAS

//
//map<tint,tint> factorizar (tint n)
//{
//	map<tint,tint> f;
//	while (n > 1) 
//	{ 
//		f[p[n]]++;
//		n /= p[n]; 
//	}
//	return f;
//}
// ESTO VA EN EL MAIN
//	for (int i = 1; i <= maxN; ++i)
//		if (p[i] == 1)
//			for (int j = i; j <= maxN; j += i)
//				p[j] = i;
//for (tint i = 0; i < maxN; i++) 
//		phi[i] = i;	
//	for (tint i = 1; i < maxN; i++)
//		for (tint j = 2 * i; j < maxN; j += i)
//			phi[j] -= phi[i];


tint f (tint n, tint l, tint r, tint k)
{
	//cout << n << " " << l << " " << r << " " << k << "\n*********\n";
	if (l > r)
		return 0;
	else if (n <= 1)
		return n % 2;
	else if (r < k / 2)
		return f(n/2,l,r,k/2);
	else if (l > k / 2)
		return f(n/2,l-k/2-1,r-k/2-1,k/2);
	else
		return f(n/2,l,k/2-1,k/2) + f(n/2,0,r-k/2-1,k/2) + n % 2; 
}

int main()
{
	#ifdef ACMTUYO
		assert(freopen("entrada.in", "r", stdin));
	#endif
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	tint n,l,r;
	while (cin >> n >> l >> r)
	{
		tint k = 1;
		
		while (k <= n)
			k*=2;
		
		cout << f(n,l-1,r-1,k-1) << "\n";
	}
	return 0;
}

/////////////////////////////////////////////////////


#include<bits/stdc++.h>

using namespace std;
#define ll long long

ll s(ll n){
	ll ans=1;
	while(n>1){
		n/=2;
		ans*=2;
	}

	ans*=2;

	return ans-1;
}

ll bs(ll l, ll r, ll num, ll idx){
	ll mid=(r+l)/2;

	if(idx==mid) return num%2;

	if(idx<mid)
		return bs(l, mid-1, num/2, idx);

	return bs(mid+1, r, num/2, idx);
}
int main(){
	
	long long n,l,r;
	scanf("%I64d %I64d %I64d",&n,&l,&r);
	long long t=s(n);
	long long ans=0;
	for(long long i=l;i<=r;i++){
		ans+=bs(1,t,n,i);
	}
	printf("%I64d\n",ans);
	return 0;
}
