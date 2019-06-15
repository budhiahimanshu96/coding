/*  https://www.codechef.com/SNCKQL16/problems/KTTABLE */


#include <iostream>
using namespace std;

int main() {

    int T;
    cin>>T;
    while(T)
    {
        int N,ans=0;
        cin>>N;
        long A[N],B[N];
        for(int i=0;i<N;++i)
            cin>>A[i];
        for(int i=0;i<N;++i)
            cin>>B[i];
        for(int i=N-1;i>0;--i)
            A[i]=A[i]-A[i-1];

        for(int i=0;i<N;++i)
            if(B[i]<=A[i])
             ans++;

        cout<<ans<<endl;

        T--;
    }

	return 0;
}
