//#include <iostream>
//
//using namespace std;
//
//int lcm(int m, int n){
//    int z, a, b;
//    a = m; b = n;
//    while(1){
//        z = a % b;
//        if(z==0) break;
//        a = b; b = z;
//    }
//    return (m*n)/b;
//}
//
//int main(){
//    int M, N, x, y, cnt, tmp_result;
//    cin >> cnt;
//
//    for(int i = 0 ; i < cnt; i++){
//        cin >> M >> N >> x >> y;
//        int result = x;
//        tmp_result = lcm(M, N);
//        while(1){
//            if(result >= tmp_result){
//                result = -1; break;
//            }
//            if((result-1) % (N) + 1 == y) {
//                break;
//            }
//            result += M;
//        }
//
//        if(M == x && N == y){
//            cout << tmp_result << endl;
//            return 0;
//        }
//
//        cout << result << endl;
//    }
//    return 0;
//}

