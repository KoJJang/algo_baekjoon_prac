//#include <iostream>
//
//using namespace std;
//
//int N, M, S, E;
//int num[2001];
//bool dp[2001][2001];
//
//
//int main(){
//    cin.tie(NULL);
//    ios::sync_with_stdio(false);
//    cin >> N;
//    for(int i = 0 ; i < N; i++){
//        cin >> num[i];
//    }
//
//    for(int i = 0 ; i < N; i++){
//        dp[i][i] = true;
//        if(num[i] == num[i+1]) dp[i][i+1] = true;
//        else dp[i][i+1] = false;
//    }
//
//    int cur = 2;
//
//    while(cur < N){
//        for(int i = cur; i < N; i++){
//            if(dp[i-cur+1][i-1] && num[i-cur] == num[i]) dp[i-cur][i] = true;
//            else dp[i-cur][i] = false;
//        }
//        cur++;
//    }
//
//    cin >> M;
//
//    for(int i = 0 ; i < M; i++){
//        cin >> S >> E;
//        cout << dp[S-1][E-1] << "\n";
//    }
//
//    return 0;
//}

