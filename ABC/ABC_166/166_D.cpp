#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    long long int X,A=0,B=0,C=0,D=0,E=0,F=0,G=0,H=0,flag=0,N=0,M=0;

    cin>>X;

rep(i,1000000000&&flag<1){
    N+=10;M-=10;
    for(;A<N;A++){
        if(pow(A,5)-pow(B,5)==X){
            cout<<A<<" "<<B<<endl;
            flag=1;
        }
        if(pow(A,5)-pow(B,5)==X){
            cout<<A<<" "<<B<<endl;
            flag=1;
        }
        B++;
    }
    if(flag==1){
        break;
    }
    for(;C>M;C--){
        if(pow(C,5)-pow(D,5)==X){
            cout<<C<<" "<<D<<endl;
            flag=1;
        }
        if(pow(C,5)-pow(D,5)==X){
            cout<<C<<" "<<D<<endl;
            flag=1;
        }
        D--;
    }
    if(flag==1){
        break;
    }
    while(E<N){
        if(pow(E,5)-pow(F,5)==X){
            cout<<E<<" "<<F<<endl;
            flag=1;
        }
        E++;
        if(pow(E,5)-pow(F,5)==X){
            cout<<E<<" "<<F<<endl;
            flag=1;
        }
        F--;
    }
    if(flag==1){
        break;
    }
    while(G>M){
        if(pow(G,5)-pow(H,5)==X){
            cout<<G<<" "<<H<<endl;
            flag=1;
        }
        G--;
        if(pow(G,5)-pow(H,5)==X){
            cout<<G<<" "<<H<<endl;
            flag=1;
        }
        H++;
    }
}

    return 0;
}