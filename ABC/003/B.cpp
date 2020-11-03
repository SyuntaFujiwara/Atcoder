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

    string s,t;
    cin>>s>>t;
    bool flag=true;
    char a[7]={'a','t','c','o','d','e','r'};
    for(int i=0;i<s.size();i++){
        if(s[i]==t[i]){
            continue;
        }
        else if(s[i]=='@'){
            flag=false;
            rep(j,7){
                if(t[i]==a[j]){
                    flag=true;
                    break;
                }
            }
            if(!flag)break;
        }
        else if(t[i]=='@'){
            flag=false;
            rep(j,7){
                if(s[i]==a[j]){
                    flag=true;
                    break;
                }
            }
            if(!flag)break;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag)cout<<"You can win"<<endl;
    else cout<<"You will lose"<<endl;

    return 0;
}