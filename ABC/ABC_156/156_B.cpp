#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    int N,K,a,i;
    vector<int>x;

    cin>>N>>K;

    for(i=0;N>0;i++){
        N/=K;
    }

    cout<<i<<endl;

    return 0;
}
