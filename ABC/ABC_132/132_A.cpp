#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    string  S,flag="No";

    cin>>S;

    if(S[0]==S[1]&&S[2]==S[3]&&S[0]!=S[2]){
        flag="Yes";
    }
    else if(S[0]==S[2]&&S[1]==S[3]&&S[0]!=S[1]){
        flag="Yes";
    }
    else if(S[0]==S[3]&&S[1]==S[2]&&S[0]!=S[1]){
        flag="Yes";
    }

    cout<<flag<<endl;


    return 0;
}
