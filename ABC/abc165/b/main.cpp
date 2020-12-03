#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    long long int X,n=100,cnt=0;

    cin>>X;

    while(1){
        n=n*1.01;
        cnt++;
        if(n>=X)
            break;
    }
    cout<<cnt<<endl;


    return 0;
}
