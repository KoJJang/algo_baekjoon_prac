//#include <iostream>
//
//using namespace std;
//
//int N, K;
//int W[101], V[101];
//int dp[101][100001];
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    cin >> N >> K;
//    for(int i = 1 ; i <= N; i++){
//        cin >> W[i] >> V[i];
//    }
//    for(int i = 0; i <= N; i++){
//        dp[i][0] = 0;
//    }
//    for (int j = 0; j <= K; j++) {
//        dp[0][j] = 0;
//    }
//    for(int i = 1 ; i <= N; i++){
//        for(int j = 1; j <= K; j++){
//            if(j < W[i]) dp[i][j] = dp[i-1][j];
//            else {
//                dp[i][j] = dp[i-1][j] > dp[i-1][j-W[i]] + V[i] ?
//                        dp[i-1][j] : dp[i-1][j-W[i]] + V[i];
//            }
//        }
//    }
//    cout << dp[N][K] <<"\n";
//}

