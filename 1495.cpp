//#include <iostream>
//
//using namespace std;
//
//int N, S, M, V[101], dp[101][1001];
//int max_val = -1;
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cin >> N >> S >> M;
//    for(int i = 1 ; i <= N; i++){
//        cin >>V[i];
//    }
//    
//    dp[0][S] = 1;
//    
//    for(int i = 1; i <= N; i++){
//        for(int j = 0 ; j <= M; j++){
//            if(dp[i-1][j] == 1) {
//                if(j-V[i] >= 0) dp[i][j-V[i]] = 1;
//                if(j+V[i] <= M) dp[i][j+V[i]] = 1;
//            }
//        }
//    }
//    for(int i = 0 ; i <= M; i++){
//        if(dp[N][i] == 1) max_val = i;
//    }
//    
//    cout << max_val << "\n";
//}

