#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    int K,A,B,flag=0;

    cin>>K>>A>>B;

    for(;A<=B;A++){
        if(A%K==0){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"OK"<<endl;
    }
    else{
        cout<<"NG"<<endl;
    }


    return 0;
}
