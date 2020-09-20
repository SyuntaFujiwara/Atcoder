#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
int main(int argc, const char * argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    p d;
    int cnt=0;
    rep(i,n){
        cin>>d.first>>d.second;
        if(d.first==d.second){
            cnt++;
            if(cnt==3){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
        else{
            cnt=0;
        }
    }
    cout<<"No"<<endl;
    

    return 0;
}