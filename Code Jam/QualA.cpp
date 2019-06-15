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

int main()
{
	//Input file
	ifstream cin("testcase.txt");
	//Output file
	ofstream cout("output.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin>>t;
	int count1=0;
	while(t--)
	{
		//Code here
		string S;
		int K;
		cin>>S;
		cin>>K;
		int ans=0;
		int flag=1;
		for(int i=0;i<S.size();++i){
			if(S[i]=='-'){
				flag=0;
				break;
			}
		}
		
		if(flag==1){	//All are '+'
		count1++;
		cout<<"Case #"<<count1<<": ";
		//Final Answer
		cout<<"0";
		//cout << setprecision (5) << ans << endl;
		cout<<endl;			
		}

		else{
			int ans=0;
		for(int i=0;i<S.size()-K+1;++i){
			if(S[i]=='-'){
				for(int j=i;j<i+K;++j){
					if(S[j]=='-')
						S[j]='+';
					else
						S[j]='-';
				}
				//cout<<S<<" ";
			ans++;	
			}
		}		
		//cout<<S;
		int f=1;
		for(int i=0;i<S.size();++i){
			if(S[i]=='-'){
				f=0;
				break;
			}
		}
		
		count1++;
		cout<<"Case #"<<count1<<": ";
		//Final Answer
		if(f==1)
		cout<<ans;
		else
		cout<<"IMPOSSIBLE";
		//cout << setprecision (5) << ans << endl;
		cout<<endl;			
		}
	}
 return 0;
}



