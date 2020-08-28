#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
int main(int argc, const char * argv[]) {

    cin.tie(0);
    ios::sync_with_stdio(false);

    string s,t;
    cin>>s>>t;
    int start;
    bool flag=true,flag_2;

    rep(i,s.size()){
        rep(j,s.size()-t.size()){
            int k=1;
            if(s[i]==t[j]){
                while(k<t.size()){
                    if(s[i+k]==t[j+k]||s[i+k]=='?'){
                        k++;
                    }
                    else{
                        flag=false;
                        break;
                    }
                }
                if(flag){
                    start=i;
                    flag_2=true;
                }
            }
        }
    }
    //出力文字列の作成
    rep(i,t.size()){
        if(s[i+start]=='?')
            s[i+start]=t[i];
    }
    rep(i,s.size()){
        if(s[i]=='?'){
            s[i]='a';
        }
    }
    if(flag_2)cout<<s<<endl;
    else cout<<"UNRESTORABLE"<<endl;


    return 0;
}
