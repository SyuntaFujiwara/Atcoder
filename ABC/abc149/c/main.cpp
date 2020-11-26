#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);

    int x;
    cin>>x;
    for(int i=x;;i++){
        bool flag=true;
        if(i%2==0&&i!=2)continue;
        for(int j=3;j<sqrt(i)+1;j+=2){
            if(i%j==0){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<i<<endl;
            return 0;
        }
    }
}