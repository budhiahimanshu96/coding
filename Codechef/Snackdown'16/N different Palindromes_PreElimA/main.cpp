#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    char a[3]={'a','b','c'};
    while(T)
    {
        int N;
        cin>>N;
        char out[N];
        int r=0;
        r=N%3;
        for(int i=0;i<N;i=i+3)
        {
            out[i]=a[0];
            out[i+1]=a[1];
            out[i+2]=a[2];
        }
        if(r==1)
            out[N-1]=a[0];
        else if(r==2)
            {
                out[N-2]=a[0];
                out[N-1]=a[1];
            }
        for(int i=0;i<N;++i)
            cout<<out[i];
        cout<<endl;
        T--;
    }
	return 0;
}
