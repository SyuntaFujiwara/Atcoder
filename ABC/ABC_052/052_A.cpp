#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    int A,B,C,D;

    cin>>A>>B>>C>>D;

    if(A*B<C*D){
        cout<<C*D<<endl;
    }
    else{
        cout<<A*B<<endl;
    }
}