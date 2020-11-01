#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    long long int N,a,next;int loop=0,loopout=1;
    long long int K;
    vector<int>A;

    cin>>N>>K;
    rep(i,N){
        cin>>a;
        A.push_back(a);
    }
    a=A.size();
    int B[a+1]={};

    next=A[0];
    rep(i,N){
        if(B[next-1]!=1){
            B[next-1]=1;
            next=A[next-1];
            loopout++;
        }
        else{
            break;
        }
    }
    rep(i,N){
        if(B[next-1]!=2){
            B[next-1]=2;
            next=A[next-1];
            loop++;
        }
        else{
            break;
        }
    }
    if(loopout<K){
        loopout-=loop;
        K-=loopout;
        K%=loop;
        rep(i,K){
            next=A[next-1];
        }
    }
    else{
        next=1;
        rep(i,K){
            next=A[next-1];
        }
    }
    cout<<next<<endl;

    return 0;
}
