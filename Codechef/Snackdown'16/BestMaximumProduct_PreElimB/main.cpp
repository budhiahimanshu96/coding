#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    long T;
    cin>>T;
    while(T)
    {
        long N,K;
        long ans;
        cin>>N>>K;
        long A[N];
        for(long i=0;i<N;i++)
            cin>>A[i];

        sort(A,A+N);
        ans = A[0];
        long temp;
        for(long i=N-1;i>K;--i)
            {
                temp=1;
                for(long j=i;j>i-K;--j)
                {
                    temp=temp*A[j];
                }
                if(temp>ans)
                ans=temp;
            }

        ans = ans%(1000000000+7);

        cout<<ans<<endl;
        T--;
    }
	return 0;
}
