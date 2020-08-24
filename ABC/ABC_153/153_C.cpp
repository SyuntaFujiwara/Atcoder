#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    int N,K;
    long long int sum=0,h;
    vector<long int>H;

    cin>>N>>K;
    rep(i,N){
        cin>>h;
        H.push_back(h);
    }

    sort(H.begin(),H.end());
    rep(i,K){
        H.pop_back();
    }
    rep(i,N-K){
        sum+=H[i];
    }

    cout<<sum<<endl;



    return 0;
}
