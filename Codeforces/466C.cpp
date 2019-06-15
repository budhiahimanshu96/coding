/*  */
#include<bits/stdc++.h>

using namespace std;

void check(long long a) { cout<<a<<endl; }
bool prime [1000001];
int sieve(int a){memset(prime,true,sizeof(prime));int p;int i;for(p=2;p*p<=a;p++){if(prime[p]==true){for(i=p*2;i<=a;i+=p)prime[i]=false;}}return 0;}
#define ll long long int
#define mod 1000000007
#define loop(i,n) for(ll i=0;i<n;++i)
//vector<ll> a
//vector<pair<ll,ll> > a

ll n,a[500000];
ll cnt[500000]={0};

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here
    cin >> n;
    long long s = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> a[i];
        s += a[i];
    }
    if (s % 3 != 0)
        cout << "0"<<endl;
    else {
        s /= 3;
        long long ss = 0;
        for(int i = n-1; i >= 0 ; --i)
        {
            ss += a[i];
            if (ss == s)
                cnt[i] = 1;
        }
        for(int i = n-2 ; i >= 0 ; --i)
            cnt[i] += cnt[i+1];
        
        long long ans = 0;
        ss = 0;
        for(int i = 0 ; i+2 < n ; ++i) {
            ss += a[i];
            if (ss == s)
                ans += cnt[i+2];
        }
        cout << ans <<endl;
    }
	return 0;
}
