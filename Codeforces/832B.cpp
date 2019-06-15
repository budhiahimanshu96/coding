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

string l;

bool search(char aa){
	for(ll i=0;i<l.size();++i)
		if(l[i]==aa)
			return true;
		
	return false;
}

int main(){
	//ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here
	
	cin>>l;
	string s;
	cin>>s;
	ll n;
	cin>>n;
	while(n--){
		string q;
		cin>>q;
		int star=0;
		for(ll i=0;i<q.size();++i)
			if(q[i]=='*'){
				star=1;
				break;
			}
		
		if(!star){
			if(s.size()!=q.size()){
				cout<<"NO"<<endl;
	//	//	//	//continue;
			}
			
			else{
				for(ll i=0;i<s.size();++i){
					if(i==(s.size()-1)){
						if(q[i]!=s[i]){
							if(q[i]!='?'){
								cout<<"NO"<<endl;
								break;
							}
							else{
								if(search(q[i])){
									cout<<"YES"<<endl;
									break;				
								}
								else
									cout<<"NO"<<endl;
									break;
							}
						}
						else{
							cout<<"YES"<<endl;
							break;
						}
					}
					else{
						if(q[i]!=s[i]){
							if(q[i]!='?'){
								cout<<"NO"<<endl;
								break;
							}
							else{
								if(search(q[i])){
									continue;
								}
								else
									cout<<"NO"<<endl;
									break;
							}
						}
						else{
							continue;
						}
						
					}
					
				}
			}
				
		}
				
	}
	
	return 0;
}
