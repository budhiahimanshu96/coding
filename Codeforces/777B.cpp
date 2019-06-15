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
	
	long long int n,i;
	cin>>n;
	char S[n],M[n];
	
	//long long int A[n]={1},B[10]={0};
	long long int ans1=0,ans2=0;

	for(i=0;i<n;++i){
		cin>>S[i];
	}
	for(i=0;i<n;++i){
		cin>>M[i];
//		B[M[i]]++;
	}

	sort(M,M+n);
	sort(S,S+n);
	
	for(i=0;i<n;++i){
		if(S[i]>M[i])
			ans1++;
		else if(S[i]<M[i])
			ans2++;
		
	}
	
	
	cout<<ans1<<endl<<ans2<<endl;	
	
	
		
	
	
	return 0;
}

