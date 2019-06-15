#include <iostream>
#include<math.h>
using namespace std;


int main() {
    int T;
    cin>>T;
    while(T)
    {
        long long A,B,C,D;
        cin>>A>>B>>C>>D;
        long long temp1,temp2,ans;
        temp2=fabs(C-D);
        if(temp2==0)
            cout<<fabs(A-B)<<endl;
        else if(temp2!=0)
        {
            if(A>B)
                temp1 = B%A;
            else if(B>A)
                temp1 = A%B;
            if(temp1>temp2)
                ans=temp1%temp2;
            else if(temp2>temp1)
                ans=temp2%temp1;
            cout<<ans<<endl;
        }
        T--;
    }
	return 0;
}
