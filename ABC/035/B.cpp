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
    int t;
    cin>>t;
    int cnt_q=0;
    int h=0;
    int v=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='L'){
            h--;
        }
        if(s[i]=='R'){
            h++;
        }
        if(s[i]=='U'){
            v++;
        }
        if(s[i]=='D'){
            v--;
        }
        if(s[i]=='?'){
            cnt_q++;
        }
    }
    if(t==2){
        while(h!=0&&cnt_q>0){
            if(h>0)h--;
            else h++;
            cnt_q--;
        }
        while(cnt_q>0){
            if(v>0)v--;
            else v++;
            cnt_q--;
        }
    }
    else{
        while(cnt_q>0){
            if(v>0)v++;
            else v--;
            cnt_q--;
        }
    }
    cout<<abs(h)+abs(v)<<endl;

    return 0;
}