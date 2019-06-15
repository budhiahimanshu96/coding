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
		ll N,i,K,flag,temp=0,flag2;
		vector <ll> arr;
		cin>>N>>K;
		string A;
		cin>>A;
		flag=A[0];
		
		for(i=0;i<N;++i){
			if(A[i]==flag){
				temp++;
			}	
			else{
				arr.push_back(temp);
				temp=1;
				flag=A[i];
			}
		}
		arr.push_back(temp);		
		sort(arr.rbegin(),arr.rend());
		
		ll a,b,c;
		
		flag2=1;
		
		if(N==3 && arr[0]==2)
			cout<<"1"<<endl;
		
		else{
			while(K>0 && flag2==1){
				if(arr[0]<2 || (arr[0]==2 && arr[1]<2))
					flag2=0;
	
				else if(arr[0]==2 && arr[1]==2 && K<2){
					flag2=0;
					}
					
				else if(arr[0]==2 && arr[1]==2){
					arr.erase(arr.begin(),arr.begin()+2);
					arr.push_back(1);
					K=K-2;
					}
	
				else if(arr[0]>2){
					a=arr[0];
					arr.erase(arr.begin());
					if(a%2!=0){
						b=a/2;
						c=a/2;
						arr.push_back(b);
						arr.push_back(c);
					}
					else{
						b=a/2;
						c=b-1;
						arr.push_back(b);
						arr.push_back(c);
					}
					K--;					
				}
				sort(arr.rbegin(),arr.rend());						
			}
			cout<<arr[0]<<endl;
		}
	}		
		
	return 0;
}
