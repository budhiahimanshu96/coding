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
	string a,b,c,d;
	a="Jay";
	b="Jaman";
	c="Disha";
	d="Utsav";
	ll n,m;
	cin>>n;
	m=n;
	ll temp1=4,temp2,temp3;
	while(m>0){
		m=m-temp1;
		if(m<0) {
		m=m+temp1; 
		break;	
		}
		else if(m==0){
			cout<<d<<endl;
			return 0;
		}
		temp1=temp1*2;
	}
	temp1=temp1/4;
		m=m-temp1;
		if(m<=0){
			cout<<a<<endl;
			return 0;
		}
		else{
			m=m-temp1;
			if(m<=0){
				cout<<b<<endl;
				return 0;
			}
			else{
				m=m-temp1;
				if(m<=0){
					cout<<c<<endl;
					return 0;
				}
				else{
					cout<<d<<endl;
					return 0;
				}
			}
		}
			
	
	//cout << setprecision (5) << ans << endl;
	return 0;
}
