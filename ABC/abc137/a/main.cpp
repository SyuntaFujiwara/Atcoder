#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    int A,B,ans;

    cin>>A>>B;

    ans=A+B;
    if(ans<A-B)
        ans=A-B;
    if(ans<A*B)
        ans=A*B;

    cout<<ans<<endl;


    return 0;
}