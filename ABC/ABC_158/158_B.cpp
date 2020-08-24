#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    long long int N,A,B,R,ans;

    cin>>N>>A>>B;

    if(A<N%(A+B))
        ans=(N/(A+B)+1)*A;
    else{
        ans=(N/(A+B))*A+N%(A+B);
    }

    cout<<ans<<endl;


    return 0;
}