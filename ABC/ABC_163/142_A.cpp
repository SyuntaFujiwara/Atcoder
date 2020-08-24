#include <bits/stdc++.h>
#include <stdio.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    double N,cnt = 0;
    
    cin>>N;

    for(int i=1;i<=N;i++){
        if(i%2==1){
            cnt++;
        }
    }
    cout<< cnt/N<<endl;


    return 0;
}