#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    int a,b;

    cin>>a>>b;

    if(a<b){
        rep(i,b){
            cout<<a;
        }
        cout<<endl;
    }
    else{
        rep(i,a){
            cout<<b;
        }
        cout<<endl;
    }

    return 0;
}
