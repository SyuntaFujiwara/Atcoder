#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    int A[3][3],N,B;
    string flag="No";
    
    rep(i,3){
        rep(j,3){
            cin>>A[i][j];
        }
    }
    cin>>N;
    rep(i,N){
        cin>>B;
        rep(j,3){
            rep(k,3){
                if(A[j][k]==B){
                    A[j][k]=0;
                }
            }
        }
    }
    rep(i,3){
        if(A[i][0]==0&&A[i][1]==0&&A[i][2]==0){
            flag="Yes";
        }
        else if(A[0][i]==0&&A[1][i]==0&&A[2][i]==0){
            flag="Yes";
        }
    }
    if(A[0][0]==0&&A[1][1]==0&&A[2][2]==0){
        flag="Yes";
    }
    else if(A[0][2]==0&&A[1][1]==0&&A[2][0==0]){
        flag="Yes";
    }

    cout<<flag<<endl;

    return 0;
}
