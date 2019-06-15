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

	int N;
	cin>>N;
	
	int A[N][N];
	
	for(int i=0;i<N;++i)
		for(int j=0;j<N;++j)
			cin>>A[i][j];
	
	int flag=1;
			
		for(int i=0;i<N;++i){
			for(int j=0;j<N;++j){
				if(A[i][j]!=1){
					int temp;
					temp=A[i][j];
					
					int arr1[N],arr2[N];
					
					for(int a=0;a<N;++a){
						arr1[a] = A[i][a];
					}	
					sort(arr1,arr1+N);
					for(int a=0;a<N;++a){
						arr2[a] = A[a][j];
					}	
					sort(arr2,arr2+N);					
					//int flag2=0;
					for(int a=0;a<N;++a){
						int t;
						t=temp-arr1[a];
						//flag2=binary_search(arr2,arr2+N,t);
						if(binary_search(arr2,arr2+N,t))
							break;
						else if(a==N-1)
							flag=0;
					}
				}
			}
		}
				
	if(flag==0)
		cout<<"No"<<endl;
		else
		cout<<"Yes"<<endl;


	//cout << setprecision (5) << ans << endl;
	return 0;
}
