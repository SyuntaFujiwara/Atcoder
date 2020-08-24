#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
long long int cnt=1,baibai=2;

int atk(long int H){
    if(H<2){
        return cnt;
    }
    else{
        H=H/2;

        baibai*=2;
        cnt=baibai-1;
        return atk(H);
    }
}

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    int long H;

    cin>>H;

    atk(H);

    cout<<cnt<<endl;



    return 0;
}

