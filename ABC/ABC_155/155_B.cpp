#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    /////////////////////
    // Write code below /
    /////////////////////
    int N,a;
    string flag="APPROVED";
    vector<int>A;

    cin>>N;
    rep(i,N){
        cin>>a;
        A.push_back(a);
    }

    rep(i,N){
        if(A[i]%2==0){
            if(A[i]%3!=0&&A[i]%5!=0){
                flag="DENIED";
            }
        }
    }

    cout<<flag<<endl;

    return 0;
}
