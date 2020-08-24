#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    int N,K,d,A,n[100]={},cnt=0;

    cin>>N>>K;
    rep(i,K){
        cin>>d;
        rep(j,d){
            cin>>A;
            n[A-1]++;
        }
    }
    rep(i,N){
        if(n[i]==0){
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}