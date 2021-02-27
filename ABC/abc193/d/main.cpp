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

    long double k;
    string s,t;
    cin>>k>>s>>t;
    vector<int>s_card(9);
    vector<int>t_card(9);
    rep(i,4){
        s_card[s[i]-'0'-1]++;
        t_card[t[i]-'0'-1]++;
    }
    long double ans=0;
    double cnt=0;
    double cnt2=0;
    rep(i,9){
        s_card[i]++;
        rep(j,9){
            t_card[j]++;
            int s_score=0;
            int t_score=0;
            rep(l,9){
                s_score+=(pow(10,s_card[l])*(l+1));
                t_score+=(pow(10,t_card[l])*(l+1));
            }
            int i_card=s_card[i]+t_card[i];
            int j_card=s_card[j]+t_card[j];
            if(i_card<=k&&j_card<=k&&s_score>t_score){
                ans=ans+((k-(long double)i_card+(long double)1)/(9*k-8))*((k-(long double)j_card+(long double)1)/(9*k-9));
                cnt++;
            }
            if(i_card<=k&&j_card<=k)cnt2++;
            t_card[j]--;
        }
        s_card[i]--;
    }
    if(cnt==cnt2){
        ans=1.0;
    }
    cout<<fixed<<setprecision(15)<<ans<<endl;
        

    return 0;
}

