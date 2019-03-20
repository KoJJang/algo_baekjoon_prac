//#include <iostream>
//
//#define MAX(A, B) (A > B ? A : B)
//
//using namespace std;
//
//int N;
//int T[1500001], P[1500001];
//int dp[1500001];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> N;
//    for(int i = 0 ; i < N; i++){
//        cin >> T[i] >> P[i];
//    }
//    
//    dp[N] = 0;
//    for(int i = N-1; i >= 0; i--){
//        if(T[i] + i - 1 >= N) dp[i] = dp[i+1];
//        else {
//            dp[i] = MAX(dp[i+1], P[i] + dp[i + T[i]]);
//        }
//    }
////    for(int i = 0 ; i < N; i++){
////        cout << dp[i] << " ";
////    }cout << endl;
//    cout << dp[0];
//}
//
////7
////3 20
////4 60
////1 30
////2 10
////2 20
////4 30
////1 10
//
