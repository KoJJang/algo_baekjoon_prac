//#include <stdio.h>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main(){
//    cin.tie(NULL);
//    ios::sync_with_stdio(false);
//
//    int T, K, chap[501], sum[501] = {0,}, dp[501][501];
//    cin >> T;
//    for(int i = 0 ; i < T; i++){
//        cin >> K;
//        for(int j = 1; j <= K; j++){
//            cin >> chap[j];
//            sum[j] = sum[j-1] + chap[j];
//            dp[j][j] = chap[j];
//        }
//        for(int r = 1; r <= K; r++){
//            dp[r][r+1] = dp[r][r] + chap[r+1];
//        }
//        for(int r = 2; r < K; r++){
//            for(int c = K-r; c >= 1; c--){
//                dp[c][c+r] = 0x3f3f3f3f;
//                for(int mid = c; mid < c+r; ++mid){
//                    dp[c][c+r] = min(dp[c][c+r], dp[c][mid] + dp[mid + 1][c+r]
//                                     + sum[c+r] - sum[c-1]);
//                }
//            }
//        }
//        cout << dp[1][K] << "\n";
////        cout << "\n";
////        for(int a = 1; a <= K; a++){
////            for(int b = 1; b <= K; b++){
////                cout << dp[a][b] << "  ";
////            }
////            cout << "\n";
////        }
//    }
//
//}
//

