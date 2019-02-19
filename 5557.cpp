//#include <iostream>
//#include <stdio.h>
//#include <string.h>
//
//using namespace std;
//
//long N, V[101], dp[101][21], R;
//long max_val = -1;
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cin >> N;
//    for(int i = 0 ; i < N-1; i++){
//        cin >>V[i];
//    }
//    cin >> R;
//    for(int i = 0 ; i < N-1; i++){
//        memset(dp[i], 0, sizeof(int)*21);
//    }
//    dp[0][V[0]] = 1;
//
//    for(int i = 1; i < N-1; i++){
//        for(int j = 0 ; j <= 20; j++){
//            if(dp[i-1][j] >= 1) {
//                if(j-V[i] >= 0) dp[i][j-V[i]] += dp[i-1][j];
//                if(j+V[i] <= 20) dp[i][j+V[i]] += dp[i-1][j];
//            }
//        }
//    }
//    cout << dp[N-2][R] << "\n";
//}

