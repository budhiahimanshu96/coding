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
	//Input file
	//Always the question asked in google code jam/apac are in this manner only.
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,sum1=0,sum2=0;
		cin>>n;
		ll X[n],Y[n];
		for(ll i=0;i<n;++i)
			cin>>X[i];
		for(ll i=0;i<n;++i)
			cin>>Y[i];
			
		for(ll i=0;i<n;++i){
			if(i%2==0)
			sum1=sum1+X[i];
			else
			sum1=sum1+Y[i];
		}
		
		for(ll i=0;i<n;++i){
			if(i%2==0)
			sum2=sum2+Y[i];
			else
			sum2=sum2+X[i];			
		}
		
		if(sum1>sum2)
		cout<<sum2<<endl;
		
		else 
			cout<<sum1<<endl;
					


	}
	return 0;
}


