//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int N, M, _num[10001], _result_table[10001], fin_res = 0;
//
//int main(){
//    cin.tie(NULL);
//    ios::sync_with_stdio(false);
//    
//    cin >> N >> M;
//    memset(_result_table, 0, sizeof(int)*10001);
//    
//    for(int i = 0; i < N; i++){
//        cin >> _num[i];
//    }
//
//    for(int i = 0 ; i < N; i++){
//        _result_table[i] = _num[i];
//        for(int j = i+1; j < N; j++){
//            _result_table[j] = _result_table[j-1] + _num[j];
//        }
//        for(int j = i; j < N; j++){
//            if(_result_table[j] == M) fin_res++;
//        }
//    }
//
//    cout << fin_res << "\n";
//    
//    return 0;
//}

