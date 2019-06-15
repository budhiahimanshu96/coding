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
	long long int T,temp1,temp2;
	temp1=1000;
	temp2=100;
	cin>>T;
	while(T){
		long long int N,i,topay=0,paid,count1=0,pos0,count2=0;
		cin>>N;
		long long int A[N];
		for(i=0;i<N;++i){
			cin>>A[i];
			if(A[i]==1)
				count2++;
		}
		
		for(i=0;i<N;++i)
			if(A[i]==0){
				pos0=i;
				break;
			}
		for(i=pos0;i<N;++i)
			if(A[i]==1)
				count1++;

		
		paid = count1*1000;
		
		
		if(N==count2)
			topay=0;
		else if(A[0]==0){
			topay = (N*1000)+(N*100);
			topay = topay - paid;
		}
		else{
			N=N-pos0;
			topay = (N*1000)+(N*100);
			topay = topay - paid;			
		}
		
		cout<<topay<<endl;		
		T--;
	}
	return 0;
}

