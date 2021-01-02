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
    string S;

    cin>>N>>K>>S;

    S[K-1]=tolower(S[K-1]);

    cout<<S<<endl;

    return 0;
}
