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
    string s;
    cin>>s;
    stack<char>fox;
    int ans=0;
    rep(i,n){
        fox.push(s[i]);
        if(fox.top()=='x'){
            fox.pop();
            if(!fox.empty()&&fox.top()=='o'){
                fox.pop();
                if(!fox.empty()&&fox.top()=='f'){
                    fox.pop();
                    ans++;
                }
                else{
                    fox.push('o');
                    fox.push('x');
                }
            }
            else{
                fox.push('x');
            }
        }
    }
    cout<<n-ans*3<<endl;

    return 0;
}
