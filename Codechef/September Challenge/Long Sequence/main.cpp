/* https://www.codechef.com/SEPT16/problems/LONGSEQ */

#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main() {
    long long int T;
    cin>>T;
    while(T)
    {
    char D[100000];
    scanf("%s",&D);

    int length;
    length = strlen(D);

    int count0=0;
    int count1=0;
    for(int i=0;i<length;++i)
        {
            if(D[i]=='0')
                count0++;
            else if(D[i]=='1')
                count1++;
        }

    if((count0==1)||(count1==1))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    T--;
    }
	return 0;
}
