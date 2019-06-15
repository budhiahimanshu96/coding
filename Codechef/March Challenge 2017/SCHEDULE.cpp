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

ll N,K,l,r,mid;
string A,B;

ll solve(ll m){
	
	ll wleft1 , wright1 , mx_length1, wzeros1,max;
	wleft1 = wright1 = wzeros1 = mx_length1 = 0;
   
    while(wright1<N){
    // First condition 	
        if(wzeros1<=K){
           
           if(A[wright1]==0)
             wzeros1++;	
           wright1++;
        }
    //Second condition 
        else {
            if(A[wleft1]==0)
              wzeros1--;
              wleft1++;
        } 
		       
   //Update result 
        ll temp1 = wright1-wleft1;
        if(temp1 > mx_length1){
          mx_length1 = temp1;
        }		
    }     
	   
	ll wleft2 , wright2 , mx_length2, wzeros2;
	wleft2 = wright2 = wzeros2 = mx_length2 = 0;
   
    while(wright2<N){
    // First condition 	
        if(wzeros2<=K){
           
           if(B[wright2]==0)
             wzeros2++;	
           wright2++;
        }
    //Second condition 
        else {
            if(B[wleft2]==0)
              wzeros2--;
              wleft2++;
        } 
		       
   //Update result 
        ll temp2 = wright2-wleft2;
        if(temp2 > mx_length2){
          mx_length2 = temp2;
        }		
    }        

	max = (mx_length1>mx_length2)? mx_length1 : mx_length2;	

	if(max>=m)
	return 1;
	else return 0;
}

int main()
{
	//Code here
	ll T;
	cin>>T;
	while(T--){
		cin>>N>>K;
		cin>>A;
		for(ll i=0;i<N;++i)
			B[i] = (A[i]=='0') ? '1' : '0' ;

		l=1;
		r=N;
		if(K>=N/2)
			cout<<"1"<<endl;
		else{
			while(l<=r){
				mid=(l+r)>>1;
				if(solve(mid)==1)
					r=mid-1;
				else
					l=mid+1;
			}
			cout<<mid<<endl;
		}					
	}				
	return 0;
}
