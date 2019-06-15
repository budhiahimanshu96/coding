/*  */
#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define mod 1000000007
void check(ll a) { cout<<a<<endl; }
bool prime [1000001];
int sieve(int a){memset(prime,true,sizeof(prime));int p;int i;for(p=2;p*p<=a;p++){if(prime[p]==true){for(i=p*2;i<=a;i+=p)prime[i]=false;}}return 0;}
//vector<ll> a
//vector<pair<ll,ll> > a

int main(){
	//ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here
	multiset<int> s;
	multiset<int> :: iterator itr;
	int x;
	s.insert(3);
	s.insert(3);
	s.insert(2);
	s.insert(5);
	cout << s.size() << "\n"; // 4
	
	for(itr = s.begin(); itr != s.end(); ++itr)
	cout<<*itr<<" ";


	//cout << setprecision (5) << ans << endl;
	return 0;
}
