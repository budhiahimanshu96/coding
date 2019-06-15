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
		//Code here
	ll n;
	cin>>n;
	ll a[2*n],flag[n]={0},ans=0,final=0;
	for(ll i=0;i<(2*n);++i)
		cin>>a[i];
	
	for(ll i=0;i<(2*n);++i){
		if(flag[a[i]-1] ==0){
			ans++;
			final = max(final,ans);
			flag[a[i]-1] = 1;
		}
		else{
			ans--;
			flag[a[i]-1] = 0;
		}
	}
	
	cout<<final<<endl;


	return 0;
}


