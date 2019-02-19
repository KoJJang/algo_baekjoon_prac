//#include <stdio.h>
//#include <iostream>
//#include <string.h>
//#include <algorithm>
//
//#define ll long long
//
//using namespace std;
//int price[101], k, n;
//int dp[100001];
//
//int main(){
//    cin.tie(NULL);
//    ios::sync_with_stdio(false);
//
//    cin >> n >> k;
//    int max = -1, min = 0x3f3f3f3f;
//    for(int i = 0 ; i < n; i++){
//        cin >> price[i];
//        max = price[i] > max ? price[i] : max;
//        min = price[i] < min ? price[i] : min;
//    }
//
//    sort(price, price+n);
//
//    for(int i = 0 ; i <= k; i++){
//        dp[i] = i % price[0] == 0 ? 1 : 0;
//    }
//
//    for(int i = 1 ; i < n; i++){
//        dp[price[i]] ++;
//        for(int j = price[i]+1 ; j <= k; j++){
//            dp[j] += dp[j-price[i]];
//        }
//    }
//
//    cout << dp[k] << "\n";
//
//    return 0;
//}

