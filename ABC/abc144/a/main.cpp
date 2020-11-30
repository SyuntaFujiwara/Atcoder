#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    int A,B;

    cin>>A>>B;

    if((A <= 9 && A >= 1) && (B <= 9 && B >= 1)){
        cout<<A * B<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }

    return 0;
}