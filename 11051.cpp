//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int N, K;
//vector<int> m,d;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    
//    cin >> N >> K;
//    if( K > N/2) {
//        K = N - K;
//    }
//    for(int i = 0 ; i < K; i++){
//        m.push_back(N-(i)); // 곱셈 값
//        d.push_back(i+1); // 나눗셈 값
//    }
//    for(int i = K-1; i >= 0; i--){ // 미리 약분한다
//        for(int j = 0 ; j < m.size(); j++){
//            int k = 2;
//            while(d[i] != 1){
//                if( m[j] % k == 0 && d[i] % k == 0){ // 공배수를 찾아 나눈다
//                    m[j] /= k;
//                    d[i] /= k;
//                    k = 2;
//                    continue;
//                }
//                if( k == d[i] ) break;
//                k++;
//                
//            }
//            if ( d[i] == 1 ) break;
//        }
//    }
//    
//    int ans = 1;
//    for(int i:m){
//        ans = ans * i % 10007; // 모드 연산하며 곱한다
//    }
//    cout << ans;
//}

