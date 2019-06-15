/* https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/monk-and-modulo-based-sorting/ */
#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define mod 1000000007
void check(ll a) { cout<<a<<endl; }
bool prime [1000001];
int sieve(int a){memset(prime,true,sizeof(prime));int p;int i;for(p=2;p*p<=a;p++){if(prime[p]==true){for(i=p*2;i<=a;i+=p)prime[i]=false;}}return 0;}
//vector<ll> a
vector<pair<ll,ll> > a;
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
}
int main(){
	//ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here

	int T;
	//cin>>T;
	T=1;
	while(T--){
		ll n,k;
		cin>>n>>k;
		ll A[n];
		for(ll i=0;i<n;++i){
			cin>>A[i];
			ll temp = A[i] % k;
			a.push_back( make_pair(A[i],temp) );
		}
		stable_sort(a.begin(), a.end(),sortbysec);
		for(ll i=0;i<n;++i){
			cout<<a[i].first<<" ";
		}
	}


	//cout << setprecision (5) << ans << endl;
	return 0;
}

