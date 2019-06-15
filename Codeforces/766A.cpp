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
	string a,b;
	cin>>a;
	cin>>b;
	
	int lena,lenb;
	lena = a.size();
	lenb = b.size();
	int flag=1;
	
	if(lena!=lenb){
		if(lena>lenb)
			cout<<lena<<endl;
		else
			cout<<lenb<<endl;
	}
	
	else if(lena==lenb){
		for(int i=0;i<lena;++i){
			if(a[i]!=b[i]){
				flag=0;
				break;
			}
		}
		if(flag==1)
			cout<<"-1"<<endl;
		else
			cout<<lena<<endl;
	}
		
	
	return 0;
}

