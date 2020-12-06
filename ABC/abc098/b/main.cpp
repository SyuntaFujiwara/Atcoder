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
    string s;
    cin>>n>>s;
    int ans=-1;
    for(int i=0;i<n;i++){
        int check[26]={};
        int cnt=0; 
        for(int j=0;j<n;j++){
            if(j<i){
                check[s[j]-'a']++;
            }
            else{
                if(check[s[j]-'a']!=0){
                    cnt++;
                    check[s[j]-'a']=0;
                }
            }
        }
        if(ans<cnt)ans=cnt;
    }
    cout<<ans<<endl;

    return 0;
}