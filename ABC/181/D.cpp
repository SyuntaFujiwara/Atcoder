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
    int n[10]={};
    for(int i=0;i<s.size();i++){
        int x=s[i]-'0';
        n[x]++;
    }   
    if(s.size()==1){
        int x=(s[0]-'0');
        if(x%8==0){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    if(s.size()==2){
        int x=(s[0]-'0');
        int y=(s[1]-'0');
        if((10*x+y)%8==0||(10*y+x)%8==0){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    for(int i=1;i<10;i++){
        for(int j=1;j<10;j++){
            for(int k=1;k<10;k++){
                if(n[i]==0)continue;
                n[i]--;
                if(n[j]==0){
                    n[i]++;
                    continue;
                }
                n[j]--;
                if(n[k]==0){
                    n[i]++;
                    n[j]++;
                    continue;
                }
                n[i]++;
                n[j]++;
                if((100*i+10*j+k)%8==0){
                    cout<<"Yes"<<endl;
                    return 0;
                }
                
            }
        }
    }
    cout<<"No"<<endl;


    return 0;
}