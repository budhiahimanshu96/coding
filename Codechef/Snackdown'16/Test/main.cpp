#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T)
    {
        long long N,m,x,y,sum=0;
        cin>>N>>m>>x>>y;
        long long A1[10000];
        for (long long i=0;i<N;++i)
            A1[i]=i;
        while(m)
        {
            long long temp=N;
            N = (2*temp)-1;
            long long A2[N];
            for(long long i=temp-1;i>=0;--i)
                A2[2*i]= A1[i];
            for(long long i=1;i<N-1;i=i+2)
                A2[i] = A2[i-1] + A2[i+1];
            for(long long i=0;i<N;++i)
                {
                    A1[i]=A2[i];
                }
            m--;
        }
        for(long long i=x-1;i<y;++i)
            sum=sum+A1[i];
        cout<<sum<<endl;

        T--;
    }
    return 0;
}
