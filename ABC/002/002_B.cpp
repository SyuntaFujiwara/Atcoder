#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
int main(int argc, const char * argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string w;
    cin>>w;
    for(int i=0;i<w.size();i++){
        if(!(w[i]=='a'||w[i]=='i'||w[i]=='u'||w[i]=='e'||w[i]=='o')){
            cout<<w[i];
        }
    }
    cout<<endl;

    return 0;
}