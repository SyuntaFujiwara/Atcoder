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
    vector<ll>a(n);
    map<ll,int>b;
    vector<ll>suma(n+1);
    suma[0]=0;
    rep(i, n) { 
        cin >> a[i];
        b[a[i]]=1;
        suma[i+1]=suma[i]+a[i];
    }
    ll ans=0;
    int front=0;
    int back=n;
    for(auto [key,value]:b){
        bool flag=true;
        int m=0;
        int fr=front,ba,FRONT=-1,BACK=-1;
        for (int i = front; i < back; i++) {
            if (a[i] < key &&flag == false) {
              fr = i;
              flag = true;
            }
            else if(a[i]<key){
                ba=i-1;
                flag=false;
                if (chmax(m, back - front)) {
                  FRONT = fr;
                  BACK = ba;
                }
            }
        }
        chmax(ans,m*key);
        if(FRONT!=-1)front=FRONT+1;
        if(BACK!=-1)back=BACK+1;
    }
    cout<<ans<<endl;

    return 0;
}
