/*  */
#include<bits/stdc++.h>
#define modulo 1000000007

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


int main()
{
	// Code here
	long long int n,a[27],i;
	cin>>n;
	char s[n];
	cin>>s;
	
	for(i=1;i<27;++i)
	cin>>a[i];
	
	return 0;
}

