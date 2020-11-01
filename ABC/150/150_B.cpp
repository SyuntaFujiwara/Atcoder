#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    int N,cnt=0;
    string S;

    cin>>N>>S;

    rep(i,N){
        if(S[i]=='A'){
            if(S[i+1]=='B'){
                if(S[i+2]=='C'){
                    cnt++;
                }
            }
        }
    }

    cout<<cnt<<endl;

    return 0;
}