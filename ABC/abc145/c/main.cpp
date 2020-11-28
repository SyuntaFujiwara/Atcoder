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
    vector<long double>x(n);
    vector<long double>y(n);
    rep(i,n)cin>>x[i]>>y[i];
    vector<int>a;
    rep(i,n)a.push_back(i);
    long double avg=0;
    int cnt=0;
    do{
        long double sum=0;
        for(int i=0;i<n-1;i++){
            sum=sum+sqrt(pow(x[a[i]]-x[a[i+1]],2)+pow(y[a[i]]-y[a[i+1]],2));
        }
        avg+=sum;
        cnt++;
    }while(next_permutation(a.begin(),a.end()));
    avg/=cnt;
    cout<<fixed<<setprecision(10)<<avg<<endl;

    return 0;
}