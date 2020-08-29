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
    cin>>n;
    int w,cnt=0,j=0,jb;
    vector<int> a;
    cin>>w;
    a.push_back(w);
    for(int i=1;i<n;i++){
        cin>>w;
        int mina=1e9;
        bool flag;
        for(int j=0;j<a.size();j++){
            if(a.at(j)>=w){
                flag=true;
                if(a.at(j)<mina){
                    mina=a.at(j);
                    jb=j;
                }
            }
        }
        if(flag){
            a.at(jb)=w;
        }
        else a.push_back(w);
    }

    std::cout<<a.size()<<endl;

    return 0;
}
