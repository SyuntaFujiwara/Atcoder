#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int A,B,C,K,max=0;

    cin>>A>>B>>C>>K;

    if(K>=A){
        K-=A;
        max+=A;
        if(K>=B){
            K-=B;
            max-=K;
        }
    }
    else{
        max=K;
    }

    cout<<max<<endl;

    return 0;
}