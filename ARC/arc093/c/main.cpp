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
    vector<int>a(n);
    rep(i,n)cin>>a[i];
    int prev=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+abs(prev-a[i]);
        prev=a[i];
    }
    sum=sum+abs(prev);
    prev=0;
    for(int i=0;i<n;i++){
        int ans=sum;
        int next;
        if(i+1>=n)next=0;
        else next=a[i+1];
        if(a[i]>=next&&a[i]<=prev){
            cout<<sum<<endl;
        }
        else if(a[i]<=next&&a[i]>=prev){
            cout<<sum<<endl;
        }
        else if(a[i]>=prev&&a[i]>=next){
            cout<<sum-2*(abs(a[i]-max(prev,next)))<<endl;
        }
        else{
            cout<<sum-2*(abs(a[i]-min(prev,next)))<<endl;
        }
        prev=a[i];
    }

    return 0;
}