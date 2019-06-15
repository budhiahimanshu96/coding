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
	
	long long int n;
	cin>>n;
	long long int a2[n][2];
	
	for(long long int i=0;i<n;++i){
		cin>>a2[i][0];
	}

	for(long long int i=0;i<n;++i){
		a2[i][1]=0;
	}
	
	long long int max=n;
	
	for(long long int i=0;i<n;++i){
		a2[i][a2[i][0]-1] = 1;
		
	}
	
	return 0;
}

