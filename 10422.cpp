////카탈란!!!!!!!!!!!!!!!!! ( 괄호 열고 닫기, 등산하기, 다각형으로 삼각형 만들기 등등 ...
//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cstring>
//
//typedef long long ll;
//#define MOD 1000000007LL
//
//using namespace std;
//
//int T, N; ll dp[2501];
//
//long long catalan(int n)
//{
//    if (n == 1 || n == 0) return dp[n] = 1;
//    
//    if ( dp[n] != -1 ) return dp[n];
//    
//    dp[n] = 0;
//    for (int i=0; i<n; i++){
//        dp[n] = (dp[n] + catalan(i)*catalan(n-i-1)) % 1000000007LL;
//    }
//    return dp[n];
//}
//
//ll go (int now ) {
//    ll &ret = dp[now];
//    if ( now ==0 || now ==1){
//        return 1 ;
//    }
//    if ( dp[now] !=-1 ) return dp[now] ;
//    ret = 0 ;
//    for (int i =0 ; i<= now-1; i++){
//        ret = (ret + go(i)* go(now-1-i) )%MOD;
//    }
//    return ret ;
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    cin >> T;
////    dp[0] = 1; dp[1] = 1;
////    for(int j = 2 ; j <2501; j++){
////        dp[j] = 0;
////        for(int k = 0; k < j; k++){
////            dp[j] += (dp[j-1-k] * dp[k]);
////        }
////    }
//    
//    for(int i = 0 ; i < T; i++){
//        cin >> N;
//        memset(dp, -1, sizeof(dp));
//        
//        long long ans;
//        N%2 == 0 ? ans = catalan(N/2) :ans = 0 ;
//        cout << ans << "\n";
//    }
//    return 0;
//}

