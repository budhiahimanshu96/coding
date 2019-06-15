/* https://www.codechef.com/APRIL16/problems/COLOR */

#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T)
    {
        int N,ans;
        cin>>N;
        char S[N];
        scanf("%s",&S);

        int cnt[3]={0};

        for(int i=0;i<N;++i)
        {
            if(S[i]=='R')
                cnt[0]++;
            if(S[i]=='G')
                cnt[1]++;
            if(S[i]=='B')
                cnt[2]++;
        }
        int maxi=cnt[0];
        for(int j=1;j<3;++j)
        {
            if(cnt[j]>maxi)
                maxi=cnt[j];
        }
         ans=N-maxi;
         cout<<ans<<endl;

        T--;
    }
    return 0;
}
