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
	
	int R;
	cin>>R;
	while(R--){
		int L;
		string S;
		cin>>L;
		cin>>S;
		int flag=1;
		int count=0;
		for(int i=0;i<L;++i){
			if(S[i]=='H'){
				if(count==1){
					flag=0;
					break;
				}
				else
					count++;	
			}
			else if(S[i]=='T'){
				if(count>0)
					count--;
				else{
					flag=0;
					break;
				}
			}
			else
			continue;
		}
		if(flag==1 && count==0)
		cout<<"Valid"<<endl;
		else
		cout<<"Invalid"<<endl;
	}
	//cout << setprecision (5) << ans << endl;
	return 0;
}
