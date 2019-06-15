/* https://www.codechef.com/SEPT16/problems/RESCALC */

#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T)
    {
        long int N;
        cin>>N;
        long int C[N];
        long int maxi;
        long int type[N][7];
            for(long int i=0;i<N;++i)
                for(long int j=1;j<7;++j)
                    type[i][j]=0;
        long int diff[N];
            for(long int i=0;i<N;++i)
                diff[i]=0;
        long int add[N];
            for(long int i=0;i<N;++i)
                add[i]=0;
        long int total[N];
            for(long int i=0;i<N;++i)
                total[i]=0;
//
        for(long int i=0;i<N;++i)
        {
            cin>>C[i];
            for(long int j=0;j<C[i];++j)
            {
                long int temp;
                cin>>temp;
                if(temp==1)
                    type[i][1]++;
                else if(temp==2)
                    type[i][2]++;
                else if(temp==3)
                    type[i][3]++;
                else if(temp==4)
                    type[i][4]++;
                else if(temp==5)
                    type[i][5]++;
                else if(temp==6)
                    type[i][6]++;
            }
        }
       /////////////////////////////////////
        for(long int i=0;i<N;++i)
        {
            if(type[i][1]>0)
                diff[i]++;
            if(type[i][2]>0)
                diff[i]++;
            if(type[i][3]>0)
                diff[i]++;
            if(type[i][4]>0)
                diff[i]++;
            if(type[i][5]>0)
                diff[i]++;
            if(type[i][6]>0)
                diff[i]++;

            /**/
            while(diff[i]>3)
            {
                if(diff[i]==4)
                {
                    add[i]=add[i]+1;
                    type[i][1]--;
                    type[i][2]--;
                    type[i][3]--;
                    type[i][4]--;
                    type[i][5]--;
                    type[i][6]--;
                    diff[i]=0;
                }
                else if(diff[i]==5)
                {
                    add[i]=add[i]+2;
                    type[i][1]--;
                    type[i][2]--;
                    type[i][3]--;
                    type[i][4]--;
                    type[i][5]--;
                    type[i][6]--;
                    diff[i]=0;
                }
                else if(diff[i]==6)
                {
                    add[i]=add[i]+4;
                    type[i][1]--;
                    type[i][2]--;
                    type[i][3]--;
                    type[i][4]--;
                    type[i][5]--;
                    type[i][6]--;
                    diff[i]=0;
                }

                if(type[i][1]>0)
                    diff[i]++;
                if(type[i][2]>0)
                    diff[i]++;
                if(type[i][3]>0)
                    diff[i]++;
                if(type[i][4]>0)
                    diff[i]++;
                if(type[i][5]>0)
                    diff[i]++;
                if(type[i][6]>0)
                    diff[i]++;
            }

        }
        for(long int i=0;i<N;++i)
        {
            total[i] = add[i] + C[i];
        }

        for(int i=0;i<N;++i)
            cout<<total[i]<<endl;

        maxi=total[0];
        long int index=0;
        for(long int i=0;i<N;++i)
        {
            if(maxi<total[i])
                {
                    maxi=total[i];
                    index=i;
                }
        }

        long int cnt=0;
        for(long int i=0;i<N;++i)
        {
            if(total[i]==maxi)
                cnt++;
        }

        if(cnt>1)
            cout<<"tie"<<endl;
        else
        {
            if(index==0)
                cout<<"chef"<<endl;
            else
                cout<<index+1<<endl;
        }

        T--;
    }
    return 0;
}
