/* https://www.codechef.com/SEPT16/problems/LEXOPAL */

#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T)
    {
        char S[12345];
        scanf("%s",&S);
        int length;
        int flag=0;
        length = strlen(S);
        int last=length-1;

        for(int i=0;i<length/2;++i)
        {
            if((S[i]==S[last])||(S[i]=='.')||(S[last]=='.'))
                flag=1;
            else
            {
                flag=0;
                break;
            }
        last--;
        }
        last = length-1;
        if(flag==1)
        {
            for(int i=0;i<=length/2;++i)
            {
                if((i==last)&&(S[i]=='.'))
                    S[i]='a';
                else if((S[last]=='.')&&(S[i]=='.'))
                    S[i]=S[last]='a';
                else if(S[i]=='.')
                    S[i]=S[last];
                else if(S[last]=='.')
                    S[last]=S[i];
            last--;
            }
            printf("%s \n",S);
        }
        else if(flag==0)
            cout<<"-1"<<endl;


        T--;
    }
    return 0;
}
