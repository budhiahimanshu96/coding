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

	double n,a;
	cin>>n>>a;
	
	double angle;
	angle = 360/n;
	angle = 180-angle;
	double subangle;
	subangle = angle/(n-2);
	
	double ans=3;

	double temp1,temp2;
	temp1 = fabs(angle-a);

		while(ans<n){
		temp2 = temp1;
		
		angle = angle-subangle;
		
		temp1 = fabs(angle-a);
		ans++;
		
		if(temp1>temp2){
			ans--;
			break;
		}		
	}
	cout<<"1 2 "<<ans<<endl;

	//cout << setprecision (5) << ans << endl;
	return 0;
}
