#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ifstream cin("testcase.txt");
    
    ll N,Q;
    cin>>N>>Q;

    ll A[N+1];
    for(ll i=1;i<=N;++i){
        cin>>A[i];
    }

    ll L,R,q,V;
    
    for(ll i=0;i<Q;++i){
        cin>>q;
        if(q==1){
            cin>>V;
            A[V]=(A[V]==0)?1:0;
//            cout<<"Q=1"<<endl;
        }    
        
        else if(q==0){
 //       	cout<<"Q=0"<<endl;
            cin>>L>>R;

            if(A[R]==0)
                cout<<"EVEN"<<endl;
            else 
                cout<<"ODD"<<endl;
        }
    }
    
    return 0;
}

