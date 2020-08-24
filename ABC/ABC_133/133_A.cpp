#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    int N,A,B;

    cin>>N>>A>>B;

    if(N*A>B){
        cout<<B<<endl;
    }
    else{
        cout<<N*A<<endl;
    }

    return 0;
}
