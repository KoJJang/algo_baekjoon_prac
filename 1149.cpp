//#include <iostream>
//
//using namespace std;
//
//int N, rgb[1001][3], dp[1001][3];
//
//int min_val(int a, int b, int c){
//    int t_m = a < b ? a : b;
//    return t_m < c ? t_m : c;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    
//    cin >> N;
//    for(int i = 0 ; i < N ; i++){
//        for(int j = 0 ; j < 3; j++){
//            cin >> rgb[i][j];
//        }
//    }
//    
//    dp[0][0] = rgb[0][0]; dp[0][1] = rgb[0][1]; dp[0][2] = rgb[0][2];
//    for(int i = 1; i < N; i++){
//        dp[i][0] = rgb[i][0] + ( dp[i-1][1] < dp[i-1][2] ? dp[i-1][1] : dp[i-1][2] );
//        dp[i][1] = rgb[i][1] + ( dp[i-1][0] < dp[i-1][2] ? dp[i-1][0] : dp[i-1][2] );
//        dp[i][2] = rgb[i][2] + ( dp[i-1][1] < dp[i-1][0] ? dp[i-1][1] : dp[i-1][0] );
//    }
//    
//    cout << min_val(dp[N-1][0], dp[N-1][1], dp[N-1][2]);
//}

