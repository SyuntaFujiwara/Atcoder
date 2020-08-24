#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    int N,M,h,Ra,Rb,R[100000][2]={{}},H[100000]={},cnt=0,good[100000]={}; 

    cin>>N>>M;
    rep(i,N){
        cin>>h;
        H[i]=h;;
    }
    rep(i,M){
        cin>>Ra>>Rb;
        R[i][0]=Ra;
        R[i][1]=Rb;
    }

    rep(i,M){
        if(H[R[i][0]-1]<H[R[i][1]-1]){
            good[R[i][1]-1]++;
            good[R[i][0]-1]=-999999;
        }
        else if(H[R[i][0]-1]>H[R[i][1]-1]){
            good[R[i][0]-1]++;
            good[R[i][1]-1]=-999999;
        }
        else{
            good[R[i][0]-1]=-999999;
            good[R[i][1]-1]=-999999;
        }
    }
    rep(i,N){
        if(good[i]>=0){
            cnt++;
        }
    }

    cout<<cnt<<endl;

    return 0;
}