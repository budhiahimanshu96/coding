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
    int n,m,i;
    cin>>n>>m;
    int a[m];
    for(i=0;i<m;++i)
        cin>>a[i];
    sort(a,a+m);
    int ans;
    
    ans = a[n-1] - a[0];
    
    for(i=1;i<=m-n;++i){
    	if((a[i+n-1]-a[i])<ans)
    		ans = a[i+n-1]-a[i];
	}
    
    cout<<ans<<endl;
	return 0;
}


