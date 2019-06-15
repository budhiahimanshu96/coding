#include <iostream>
using namespace std;

int main() {
    long T;
    cin>>T;
    while(T)
    {
        int flag=0;
        long N;
        cin>>N;
        long C[N]={0};
        for(long i=0;i<N;++i)
            cin>>C[i];
        for(long i=0;i<N;++i)
            {
                if((C[i]==C[i+1])&&(C[i]==C[i+2]))
                    {
                        flag=1;
                        break;
                    }
            }
        if(flag==1)
        cout<<"Yes"<<endl;
        else if(flag==0)
        cout<<"No"<<endl;
        T--;
    }

	return 0;
}
