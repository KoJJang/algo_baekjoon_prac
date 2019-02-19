//#include <iostream>
//#include <stdio.h>
//
//using namespace std;
//
//#define ll long long
//
//int main(){
//    cin.tie(NULL);
//    ios::sync_with_stdio(false);
//
//    int N; ll dp[101] = {0,};
//    cin >> N;
//
//    for(int i = 0 ; i < 7; i++){
//        dp[i] = i;
//    }
//
//    for(int i = 7; i <= N; i++){
//        for(int j = i-6; j <= i - 3; j++){
//            ll cur = dp[j] * ( i - j - 1);
//            dp[i] = cur > dp[i] ? cur : dp[i];
//        }
//    }
//    
//    cout << dp[N] << "\n";
//}

