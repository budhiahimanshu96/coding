/* https://www.codechef.com/APRIL16/problems/CHEFPATH */

#include <iostream>

using namespace std;

int main()
{
    long T;
    cin>>T;
    while(T)
    {
        long long m,n;
        cin>>m>>n;
        long long pro=m*n;
        if((m==1)&&(n==2))
            cout<<"Yes"<<endl;
        else if((m>=2)&&(pro%2==0))
            cout<<"Yes"<<endl;
        else if(pro%2!=0)
            cout<<"No"<<endl;
        else
            cout<<"No"<<endl;
        T--;
    }
    return 0;
}
