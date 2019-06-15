/*  */
#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define mod 1000000007
void check(ll a) { cout<<a<<endl; }
bool prime [1000001];
int sieve(int a){memset(prime,true,sizeof(prime));int p;int i;for(p=2;p*p<=a;p++){if(prime[p]==true){for(i=p*2;i<=a;i+=p)prime[i]=false;}}return 0;}
vector<int> a;
//vector<pair<ll,ll> > a

int main(){
	//ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here
	
	for(int i=0;i<10;++i)
	a.push_back(i);
	
	int m=min(a.begin(),a.end());
	cout<<m;



	//cout << setprecision (5) << ans << endl;
	return 0;
}

/*int main()
{
	//Input file
	ifstream cin("testcase.txt");
	//Output file
	ofstream cout("output.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Always the question asked in google code jam/apac are in this manner only.
	int t;
	cin>>t;
	int count1=0;
	while(t--)
	{
		//Code here




		count1++;
		cout<<"Case #"<<count1<<": ";
		//Final Answer
		//cout << setprecision (5) << ans << endl;
		cout<<endl;
	}
 return 0;
}*/



