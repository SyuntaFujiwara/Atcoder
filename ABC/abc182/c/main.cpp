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

    string n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n.size();i++){
        sum+=(n[i]-'0');
    }
    if(sum%3==0){
        cout<<0<<endl;
        return 0;
    }
    if(sum%3==1){
        bool flag=false;
        for(int i=0;i<n.size();i++){
            if((n[i]=='1'||n[i]=='4'||n[i]=='7')&&n.size()!=1){
                cout<<1<<endl;
                return 0;
            }
            if(n[i]=='2'||n[i]=='5'||n[i]=='8'){
                flag=true;
            }
        }
        if(flag&&n.size()!=2){
            cout<<2<<endl;
            return 0;
        }
    }
    if(sum%3==2){
        bool flag=false;
        for(int i=0;i<n.size();i++){
            if((n[i]=='2'||n[i]=='5'||n[i]=='8')&&n.size()!=1){
                cout<<1<<endl;
                return 0;
            }
            if(n[i]=='1'||n[i]=='4'||n[i]=='7'){
                flag=true;
            }
        }
        if(flag&&n.size()!=2){
            cout<<2<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;


    return 0;
}