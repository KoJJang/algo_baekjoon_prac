//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//vector<int> v;
//int N, K;
//
//bool func(int tar, int f_idx, int cnt){
//    if(tar > f_idx && f_idx > N/2) {
//        v[f_idx] = 1;
//        return func(tar - f_idx + cnt, f_idx - 1, cnt+1);
//
//    }
//    for(int i = f_idx ; i >= 0; i--){
//        if(tar == i) {
//            v[i] = 1;
//            return true;
//        }
//    }
//    return false;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> N >> K;
//    v.resize(N);
//    if(func(K, N-1, 1)){
//        for(int a = 0 ; a < N ; a ++){
//            if(v[a] == 0) cout <<"A";
//            else          cout <<"B";
//        }cout << "\n";
//    }else {
//        cout << -1 << endl;
//    }
//}

