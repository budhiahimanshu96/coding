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
	
	long long int n,i,j;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;++i)
		cin>>a[i];
		
	long long int max=a[0],min=a[0];

	for(i=0;i<n;++i){
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];
	}
	long long int ans=0;
	
	for(i=0;i<n;++i){
		if((a[i]!=min)&&(a[i]!=max))
			ans++;
	}
	
	cout<<ans<<endl;
	
	
	return 0;
}

