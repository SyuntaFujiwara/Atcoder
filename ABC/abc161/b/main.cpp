#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    int N,M,A[1000];
    float m,sum=0,flag=0;

    cin>>N>>M;
    m=M;
    rep(i,N){
        cin>>A[i];
        sum+=A[i];
    }

    sort(A,A+N,greater<int>());
    
    if(A[M-1]<(sum/(4*M))){
        flag=1;
    }


    if(flag==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }


    return 0;
}