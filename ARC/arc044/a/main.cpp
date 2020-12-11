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

    ll n;
    cin>>n;
    if(n==1){
        cout<<"Not Prime"<<endl;
        return 0;
    }
    if(n==2||n==3||n==5){
        cout<<"Prime"<<endl;
        return 0;
    }
    for(int i=2;i<sqrt(n)+1;i++){
        if(n%i==0){
            if((n%10)%2!=0&&(n%10)%5!=0&&n%3!=0){
                cout<<"Prime"<<endl;
                return 0;
            }
            else{
                cout<<"Not Prime"<<endl;
                return 0;
            }
        }
    }
    cout<<"Prime"<<endl;

    return 0;
}