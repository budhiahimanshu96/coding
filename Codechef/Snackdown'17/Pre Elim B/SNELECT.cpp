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
	ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here

	int T;
	cin>>T;
	while(T--){
		string s;
		cin>>s;
		int countm=0,counts=0;
		int l = s.size();
		int arr[l]={0};
				
			
		for(int i=0;i<l;++i){
			if(s[i]=='m'){
				countm++;
				arr[i]=1;				
			}
		}
		
		for(int i=0;i<l;++i){
			
			if(arr[i]==1){
				if(i==0){
					if(arr[i+1]==0)
						arr[i+1]=2;
				}
				else if(i==(l-1)){
					if(arr[i-1]==0)
						arr[i-1]=2;
				}

				else{
					if(arr[i-1]==0)
						arr[i-1]=2;
					else if(arr[i+1]==0)
						arr[i+1]=2;					
				}
			}
		}
		
		
		for(int i=0;i<l;++i)
			if(arr[i]==0)
				counts++;
		
		
		if(counts<countm)
		cout<<"mongooses"<<endl;
		else if(counts==countm)
		cout<<"tie"<<endl;
		else
		cout<<"snakes"<<endl;		
	}


	//cout << setprecision (5) << ans << endl;
	return 0;
}
