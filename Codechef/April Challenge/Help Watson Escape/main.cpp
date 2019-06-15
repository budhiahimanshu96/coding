/* https://www.codechef.com/APRIL16/problems/BIPIN3 */

#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T)
    {
        long long N,K,i=0;
        cin>>N>>K;
        long long ans=K;
        for(i=0;i<N-1;++i)
            ans=ans*(K-1);
        cout<<ans<<endl;
        T--;
    }
    return 0;
}
