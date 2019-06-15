/*  */
#include<bits/stdc++.h>

using namespace std;

void check(long long a){
cout<<a<<endl;
}
long long int gcd(long long int a, long long int b){
    if (b != 0)
       return gcd(b, a % b);
    else
       return a;
}
long long int lcm(long long int a, long long int b){
    return (a*b)/gcd(a, b);
}

#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,i,j;
		cin>>n;
		ll A[n][n],count1=0,count0=0;
		for(i=0;i<n;++i){
			for(j=0;j<n;++j){
				cin>>A[i][j];
				if(A[i][j]==1)
				count1++;
				else count0++;		
			}
		}
		
		if(count1<=n){
			cout<<"0"<<endl;
		}
		else {
			ll ans=0,a=1,count;
			count1=count1-n;
			count=n-1;
			while(count1>0){
				count1=count1-(2*count);
				count--;
				ans++;
			}
			cout<<ans<<endl;			
		}
		
	}
	return 0;
}


