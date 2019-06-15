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
	ll a,b;
	cin>>a>>b;
	ll ans=0;
	while(a<=b){
		a=a*3;
		b=b*2;
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}


