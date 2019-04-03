//#include <iostream>
//#include <cstdio>
//#include <cmath>
//
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int N;
//    int path[4] = {0,}, tmp;
//    
//    cin >> N;
//    for(int i = 0; i < N-2; i++){
//        for(int j = 0 ; j < 4; j++){
//            scanf("%1d", &tmp);
//            if(tmp == 0) path[j]++;
//        }
//    }
//    
//    int res = 0, ans = 0x3f3f3f3f, x;
//    for (int i = 0; i < 4; i++) {
//        res = 0;
//        for (int j = 0; j < 4; j++) {
//            if (i == j) continue;
//            x = abs(i - j);
//            if (x & 1) x = 1;
//            res += x * path[j];
//        }
//        ans = ans < res ? ans : res;
//    }
//    ans += N + 2;
//    cout << ans << endl;
//}
//
////6
////1110
////1110
////1110
////1110
//
