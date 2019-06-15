/* https://www.codechef.com/SEPT18B/problems/MAGICHF# */
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

	int T;
	cin>>T;
	while(T--){
		int N,X,S;
		cin>>N>>X>>S;
		vector<int> arr(N+1,0);
		arr[X]=1;
		while(S--){
			int A,B;
			cin>>A>>B;
			arr[A]=arr[A]+arr[B];
			arr[B]=arr[A]-arr[B];
			arr[A]=arr[A]-arr[B];
//			for(int i=0;i<=N;++i)
//				cout<<arr[i]<<" ";
//				cout<<endl;
		}
		cout<<distance(arr.begin(), std::find(arr.begin(), arr.end(), 1))<<endl;
	}


	//cout << setprecision (5) << ans << endl;
	return 0;
}

