#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define mod 1000000007
void check(ll a) { cout<<a<<endl; }
bool prime [1000001];
int sieve(int a){memset(prime,true,sizeof(prime));int p;int i;for(p=2;p*p<=a;p++){if(prime[p]==true){for(i=p*2;i<=a;i+=p)prime[i]=false;}}return 0;}
//vector<ll> a
//vector<pair<ll,ll> > a
int a[1000];
int main(){
	//ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here

	int n;
	cin >> n;
	
	if(n == 1)
	{
		cout << "YES\n";
		return 0;
	}
	
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	int inc = 0, eq = 0, dec = 0;
	
	for(int i = 1; i < n; i++)
	{
		if(a[i] > a[i -1])
		{
			if(eq || dec)
			{
				cout << "NO\n";
				return 0;
			}
			
			inc = 1;
		}
		
		if(a[i] == a[i -1])
		{
			if(dec)
			{
				cout << "NO\n";
				return 0;
			}
			
			eq = 1;
		}
		
		if(a[i] < a[i -1])
		{
			dec = 1;
		}
	}
	
	cout << "YES\n";

	return 0;
		
}
