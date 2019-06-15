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


int main()
{
	// Code here
	int n,m,z;
	cin>>n;
	cin>>m;
	cin>>z;

	int d;
	d = lcm(n,m);
	cout<<z/d<<endl;	
	
	return 0;
}

