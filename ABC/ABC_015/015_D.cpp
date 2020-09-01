#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
int n, W,k;
int weight[110], value[110];

// DPテーブル
pair<int,int> dp[110][10010];

int main() {
  cin >> W >> n >> k;
  for (int i = 0; i < n; ++i) cin >> weight[i] >> value[i];

  // DP初期条件: dp[0][w] = 0
  for (int w = 0; w <= W; ++w) {
      dp[0][w].first = 0;
      dp[0][w].second=0;
  }

  // DPループ
  for (int i = 0; i < n; ++i) {
    for (int w = 0; w <= W; ++w) {
      if (w >= weight[i]) {
          if(dp[i][w-weight[i]].first + value[i]>dp[i][w].first){
            dp[i+1][w].first = max(dp[i][w-weight[i]].first + value[i], dp[i][w].first);
            dp[i+1][w].second=dp[i][w].second+1;
          }
      }
      else dp[i+1][w] = dp[i][w];
    }
  }

  for(int w=W;;w--){
      if(dp[n][w].second>=k){
        cout << dp[n][w].first <<" "<<dp[n][w].second<< endl;
        break;
      }
  }
}