//#include <iostream>
//
//using namespace std;
//
//int N;
//unsigned long long dp[31];
//
//int main(){
//    cin.tie(0);
//    ios::sync_with_stdio(0);
//
//    N = 1;
//
//    dp[0] = 1; dp [1] = 1;
//    for(int i = 2; i < 31; i++){
//        int t = 0; unsigned long long tmp = 0;
//        while(t<i){
//            tmp += dp[i-t-1]*dp[t];
//            t++;
//        }
//        dp[i] = tmp;
//    }
//
//    while(N != 0){
//        cin >> N;
//        if(N==0) return 0;
//        cout << dp[N] << "\n";
//    }
//}

