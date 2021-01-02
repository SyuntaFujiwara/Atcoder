#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
int main(int argc, const char * argv[]) {



    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    char c[n];
    int r_cnt=0;
    rep(i,n){
        cin>>c[i];
        if(c[i]=='R'){
            r_cnt++;
        }
    }
    int R_cnt=0;
    for(int i=r_cnt;i<n;i++){
        if(c[i]=='R'){
            R_cnt++;
        }
    }
    cout<<R_cnt<<endl;


    return 0;
}
