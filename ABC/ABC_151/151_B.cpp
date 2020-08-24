#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    int N,K,M,a,sum=0;

    cin>>N>>M>>K;
    rep(i,N-1){
        cin>>a;
        sum+=a;
    }

    if(N*K<=sum){
        cout<<"0"<<endl;
    }
    else if(N*K>sum+M){
        cout<<"-1"<<endl;
    }
    else{
        cout<<N*K-sum<<endl;
    }

    return 0;
}
