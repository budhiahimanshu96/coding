#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define loop(i,n) for(ll i=0;i<n;++i)
void check(long long a) { cout<<a<<endl; }
bool prime [1000001];
int sieve(int a){memset(prime,true,sizeof(prime));int p;int i;for(p=2;p*p<=a;p++){if(prime[p]==true){for(i=p*2;i<=a;i+=p)prime[i]=false;}}return 0;}
vector<ll> arr;
vector<pair<ll,ll> > a;

int main(){
//	ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here
	ll n,d,i,temp1,temp2;
	cin>>n>>d;
	loop(i,n){
		cin>>temp1>>temp2;
		a.push_back(make_pair(temp1,temp2));
	}
	sort(a.begin(),a.end());
	ll sum[n]={0};
	sum[0]=a.at(0).second;
	for(i=1;i<a.size();i++)
	{
		sum[i]=sum[i-1]+a.at(i).second;		
	}
	
	for(i=0;i<a.size();i++)
		arr.push_back(a.at(i).first) ;
		
//	loop(i,n){
//		arr[i]=a.at(i).first;
//	}
	ll j,ans=0;
	loop(i,n){
		j = lower_bound(arr.begin(),arr.end(),arr.at(i)+d)-arr.begin();
		j--;
		if(j>=(n-1))		
			j=n-1;	
		
		if(j==i){
			ans = max(ans,a.at(i).second);
		}
		else if(i==0){
			ans = max(ans,sum[j]);
		}
			
		else{
			ans = max(ans,sum[j]-sum[i-1]);
		}
	}
	
	cout<<ans<<endl;		
	return 0;
}


