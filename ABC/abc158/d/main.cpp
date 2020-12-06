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

    string s;
    cin>>s;
    int q;
    cin>>q;
    vector<int>t(q);
    vector<int>f(q);
    vector<string>c(q);
    rep(i,q){
        cin>>t[i];
        if(t[i]==2){
            cin>>f[i]>>c[i];
        }
    }
    deque<string>ans;
    ans.push_back(s);
    bool flag=true;
    int cntRev=0;
    rep(i,q){
        if(t[i]==1){
            cntRev++;
            flag=!flag;
        }
        else if(t[i]==2){
            if(f[i]==1){
                if(flag){
                    ans.push_front(c[i]);
                }
                else{
                    reverse(c[i].begin(),c[i].end());
                    ans.push_back(c[i]);
                }
            }
            else{
                if(flag){
                    ans.push_back(c[i]);
                }
                else{
                    reverse(c[i].begin(),c[i].end());
                    ans.push_front(c[i]);
                }
            }
        }
    }
    if(cntRev%2==1){        
        reverse(ans.begin(),ans.end());
        for_each(ans.begin(),ans.end(),[](string x){
            reverse(x.begin(),x.end());
            cout<<x;
        });
    }
    else{
        for_each(ans.begin(),ans.end(),[](string x){
            cout<<x;
        });
    }
    cout<<endl;

    return 0;
}