#include <bits/stdc++.h>
using namespace std;
const long long INF = 1000000000000;
int main(){
  int N, K, P;
  cin >> N >> K >> P;
  vector<int> C(N);
  vector<vector<int>> A(N, vector<int>(K));
  for (int i = 0; i < N; i++){
    cin >> C[i];
    for (int j = 0; j < K; j++){
      cin >> A[i][j];
    }
  }
  vector<int> POW(K + 1);
  POW[0] = 1;
  for (int i = 0; i < K; i++){
    POW[i + 1] = POW[i] * (P + 1);
  }
  vector<vector<long long>> dp(N + 1, vector<long long>(POW[K], INF));
  dp[0][0] = 0;
  for (int i = 0; i < N; i++){
    for (int j = 0; j < POW[K]; j++){
      dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
      int j2 = 0;
      for (int k = 0; k < K; k++){
        int x = j / POW[k] % (P + 1);
        x = min(x + A[i][k], P);
        j2 += x * POW[k];
      }
      dp[i + 1][j2] = min(dp[i + 1][j2], dp[i][j] + C[i]);
    }
  }
  if (dp[N][POW[K] - 1] == INF){
    cout << -1 << endl;
  } else {
    cout << dp[N][POW[K] - 1] << endl;
  }
}
