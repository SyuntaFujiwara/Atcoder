#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    int H,N,a,sum=0;

    cin>>H>>N;
    rep(i,N){
        cin>>a;
        sum+=a;
    }

    if(sum<H){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }


    return 0;
}
