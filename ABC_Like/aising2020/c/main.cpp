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

    int n;
    cin>>n;
    vector<int>cnt(10010);
    for(int i=1;i<sqrt(n)+1;i++){
        for(int j=1;j<sqrt(n)+1;j++){
            for(int k=1;k<sqrt(n)+1;k++){
                int x=pow(i,2)+pow(j,2)+pow(k,2)+i*j+j*k+k*i;
                if(x<10005)cnt[x]++;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<cnt[i]<<endl;
    }

    return 0;
}

