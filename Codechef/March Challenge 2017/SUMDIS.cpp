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
	
	ll T;
	cin>>T;
	while(T--){
		ll N;
		ll graph[N][N]={0};
		ll dist[N][N];
		cin>>N;
		ll A[N-1],B[N-2],C[N-3],i;
		for(i=0;i<(N-1);++i){
			cin>>A[i];
			graph[i][i+1]=A[i];
			graph[i+1][i]=A[i];		
		}
		for(i=0;i<(N-2);++i){
			cin>>B[i];			
			graph[i][i+2]=B[i];
			graph[i+2][i]=B[i];		
		}
		for(i=0;i<(N-3);++i){
			cin>>C[i];			
			graph[i][i+3]=C[i];
			graph[i+3][i]=C[i];		
		}
		
			
			
		
	}
	
	return 0;
}


