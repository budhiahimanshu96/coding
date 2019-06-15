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
	long long int n,L;
	long long int count=0;
	cin>>n>>L;
	long long int K[n],S[n];
	for(long long int i=0;i<n;++i)
		cin>>K[i];
	for(long long int i=0;i<n;++i)
		cin>>S[i];
		
	for(long long int i=0;i<n;++i)
		if(K[i]==S[i])
			count++;

	long long int diff1[n],diff2[n];

	for(long long int i=0;i<n-1;++i){
		diff1[i] = K[i+1] - K[i];
		diff2[i] = S[i+1] - S[i];		
	}

	diff1[n-1] = (L-K[n-1])+(K[0]);
	diff2[n-1] = (L-S[n-1])+(S[0]);
	
	long long int sum1=0,sum2=0;
	
	for(long long int i=0;i<n;++i){
		sum1= sum1 + diff1[i];
		sum2 = sum2 + diff2[i];
	}


	
/*	int flag=1;
	for(int i=0;i<n;++i){
		if((diff1[i]!=diff2[i])||(K[n-1]>=L)||(S[n-1]>=L)){
			flag=0;
			break;
		}
	}
*/
	
	if(((count%2!=0)||(K[n-1]>=L)||(S[n-1]>=L)))
		cout<<"NO";
	else if((count%2==0)&&(sum1==sum2))
	cout<<"YES"<<endl;
	else 
	cout<<"NO"<<endl;
			
	return 0;
}

