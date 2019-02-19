//#include <stdio.h>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int T;
//int dp[4][10001];
//
//int main(){
//    cin.tie(NULL);
//    ios::sync_with_stdio(false);
//
//    dp[1][1] = 1;dp[1][2] = 1;dp[1][3] = 1;
//    dp[2][1] = 0;dp[2][2] = 1;dp[2][3] = 1;
//    dp[3][1] = 0;dp[3][2] = 0;dp[3][3] = 1;
//
//    cin >> T;
//
//    for(int i = 0 ; i < T; i++){
//        int tmp;
//        cin >> tmp;
//
//        for(int i = 4; i <= tmp; i++){
//            dp[1][i] = dp[1][i-1];
//            dp[2][i] = dp[2][i-2] + dp[1][i-2];
//            dp[3][i] = dp[3][i-3] + dp[2][i-3] + dp[1][i-3];
//        }
//
//        cout << dp[1][tmp] + dp[2][tmp] + dp[3][tmp] << "\n";
//    }
//    return 0;
//}

