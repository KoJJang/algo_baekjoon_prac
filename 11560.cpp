//#include <iostream>
//
//using namespace std;
//
//#define MAX_VAL 211
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    
//    int T, N, K;
//    long long dp[21][MAX_VAL] = {0,};
//    dp[1][0] = 1; dp[1][1] = 1;
//    for(int i = 2; i < 21; i++){
//        for(int j = 0 ; j < i+1; j++){
//            for(int k = 0 ; k < i * (i+1) / 2; k++){
//                dp[i][j+k] += dp[i-1][k];
//            }
//        }
//    }
//    cin >> T;
//    
//    for(int t = 0 ; t < T; t++){
//        cin >> K >> N;
//        cout << dp[K][N] << "\n";
//    }
//    return 0;
//}

