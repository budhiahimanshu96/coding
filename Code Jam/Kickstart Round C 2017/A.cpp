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
		
		string W;
		cin>>W;
		int l;
		l=W.size();
		if(l%2!=0){
		count1++;
		cout<<"Case #"<<count1<<": ";
		cout<<"AMBIGUOUS";		
		//Final Answer
		//cout << setprecision (5) << ans << endl;
		cout<<endl;			
		}
		
		else{
			if(l==2){
				count1++;
				cout<<"Case #"<<count1<<": ";
				cout<<W[1]<<W[0];
				//Final Answer
				//cout << setprecision (5) << ans << endl;
				cout<<endl;
			}
			
			else{
				char a[4];
				a[0]='Z'-W[3]+W[1]+1;
				a[1]=W[0];
				a[2]=W[3];
				a[3]='Z'-W[0]+W[2]+1;
													
				count1++;
				cout<<"Case #"<<count1<<": ";
				cout<<a[0]<<a[1]<<a[2]<<a[3];
				//Final Answer
				//cout << setprecision (5) << ans << endl;
				cout<<endl;				
			}
			
			
			
		}				



	}
 return 0;
}

