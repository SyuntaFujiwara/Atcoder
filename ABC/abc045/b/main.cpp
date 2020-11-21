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

    string sa,sb,sc;
    cin>>sa>>sb>>sc;
    char next=sa[0];
    int a=0,b=0,c=0;
    while(1){
        if(next=='a'){
            if(a==sa.size()){
                cout<<"A"<<endl;
                return 0;
            }
            next=sa[a++];
        }
        else if(next=='b'){
            if(b==sb.size()){
                cout<<"B"<<endl;
                return 0;
            }
            next=sb[b++];
        }
        else{
            if(c==sc.size()){
                cout<<"C"<<endl;
                return 0;
            }
            next=sc[c++];
        }
    }
}