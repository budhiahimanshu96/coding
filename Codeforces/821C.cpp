/*  */
#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define mod 1000000007
void check(ll a) { cout<<a<<endl; }
bool prime [1000001];
int sieve(int a){memset(prime,true,sizeof(prime));int p;int i;for(p=2;p*p<=a;p++){if(prime[p]==true){for(i=p*2;i<=a;i+=p)prime[i]=false;}}return 0;}
vector<ll> a;
//vector<pair<ll,ll> > a
template <class ForwardIterator>
bool is_sorted (ForwardIterator first, ForwardIterator last)
{
  if (first==last) return true;
  ForwardIterator next = first;
  while (++next!=last) {
    if (*next<*first)     // or, if (comp(*next,*first)) for version (2)
      return false;
    ++first;
  }
  return true;
}
int main(){
	ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here

	ll n;
	cin>>n;
	n=n*n;
	ll ans=0;
	while(n--){
		string s;
		ll temp;
		cin>>s>>temp;
		if(s=="add"){
			a.push_back(temp);
			
			reverse(a.begin(),a.end());		

			if(is_sorted(a.begin(),a.end())){
				ans++;
				cout<<"not sort found\n";
				sort(a.begin(),a.end());
			}

			reverse(a.begin(),a.end());		
				
			
		}
		
		else if(s=="remove"){
			reverse(a.begin(),a.end());
			a.pop_back();
			reverse(a.begin(),a.end());			
		}
	}

	cout<<ans<<endl;

	//cout << setprecision (5) << ans << endl;
	return 0;
}
